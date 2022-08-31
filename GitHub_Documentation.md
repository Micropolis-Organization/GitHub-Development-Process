### Software Development Process using GitHub 

---

#### References
1. [https://docs.github.com/en/organizations/collaborating-with-groups-in-organizations/about-organizations](https://docs.github.com/en/organizations/collaborating-with-groups-in-organizations/about-organizations)
2. [https://docs.github.com/en/issues/planning-and-tracking-with-projects/learning-about-projects/about-projects](https://docs.github.com/en/issues/planning-and-tracking-with-projects/learning-about-projects/about-projects)
3. [https://docs.github.com/en/organizations/organizing-members-into-teams/about-teams](https://docs.github.com/en/organizations/organizing-members-into-teams/about-teams)
4. [https://docs.github.com/en/issues/tracking-your-work-with-issues/about-issues](https://docs.github.com/en/issues/tracking-your-work-with-issues/about-issues)
5. [https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/about-pull-requests](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/about-pull-requests)

---
# Contents
- [***Contents***](#contents)
  - [References](#references)
  - [1. GitHub Organization](#1-gitHub-organization)
  - [2. GitHub Organization](#2-gitHub-organization)
  - [3. ROS2 Topics](#3-ros2-topics)
  - [4. ROS2 Services](#4-ros2-services)
  - [5. ROS2 Parameters](#5-ros2-parameters)
  - [6. ROS2 Actions](#6-ros2-actions)
  - [7. ROS2 Launch](#7-ros2-launch)
  - [8. ROS2 Bags](#8-ros2-bags)
  - [9. Creating a Workspace](#9-creating-a-workspace)
  - [10. ROS2 Packages](#10-ros2-packages)
  - [11. Creating a Package](#11-creating-a-package)

### Process to follow when working on new project  
## Process to follow for the first time
1. Creat an organization 
2. Assign members to the organization.
3. Assign members of the organization into teams.
## Process to follow with every new project
1. Create a repository for the project.
2. Assign team to the repository with the access permissions.
3. Create an organization project.
4. Create issues for every task within the project and assign them to the members of the team and assign them to the organization project.
5. After finishing each issue raise a pull request with issue id # and the state of the issue (fixed,close,..).
6. commit the change and push them to the main branch of the project or if you are working on a seprate branch merge it with the main branch.

#### 1. GitHub Organization
##### 1.1 About organization

- Organizations are shared accounts where businesses and open-source projects can collaborate across many projects at once, with sophisticated security and administrative features.
- Each person that uses GitHub always signs into a personal account, and multiple personal accounts can collaborate on shared projects by joining the same organization account. A subset of these personal accounts can be given the role of organization owner, which allows those people to granularly manage access to the organization's resources using sophisticated security and administrative features.
- You can invite an unlimited number of people to join your organization, then give these organization members a variety of roles that grant different levels of access to the organization and its data.
- In addition to managing access to the organization itself, you can separately manage access to your organization's repositories, project boards, and apps.
##### 1.2 Creating new organization
1. In the upper-right corner of any page, click your profile photo, then click Settings.
![This is an image](https://docs.github.com/assets/cb-34573/images/help/settings/userbar-account-settings.png)
2. In the "Access" section of the sidebar, click  Organizations.
3. In the "Organizations" section, click New organization. 
![This is an image](https://docs.github.com/assets/cb-11403/images/help/settings/new-org-button.png)
4. Follow the prompts to create your organization.

#### 2. GitHub Projects
##### 2.1 About projects
- A project is an adaptable spreadsheet that integrates with your issues and pull requests on GitHub to help you plan and track your work effectively. You can create and customize multiple views by filtering, sorting, grouping your issues and pull requests, adding custom fields to track metadata specific to your team, and visualize work with configurable charts. Rather than enforcing a specific methodology, a project provides flexible features you can customize to your team’s needs and processes.
- Your projects are built from the issues and pull requests you add, creating direct references between your project and your work. Information is synced automatically to your project as you make changes, updating your views and charts. This integration works both ways, so that when you change information about a pull request or issue in your project, the pull request or issue reflects that information. For example, change an assignee in your project and that change is shown in your issue. You can take this integration even further, group your project by assignee, and make changes to issue assignment by dragging issues into the different groups.


##### 2.2 Creating new organization project

1. In the top right corner of GitHub.com, click your profile photo, then click Your organizations.

![This is an image](https://docs.github.com/assets/cb-10767/images/help/profile/your-organizations.png)





2. Click the name of your organization.

![This is an image](https://docs.github.com/assets/cb-5513/images/help/organizations/org-settings-link.png)

3. Under your organization name, click  Projects.

![This is an image](https://docs.github.com/assets/cb-9264/images/help/projects-v2/tab-projects.png)

4. Click New project.

5. When prompted to select a template, click a template or, to start with an empty project, click Table or Board. Then, click Create.

![This is an image](https://docs.github.com/assets/cb-46006/images/help/issues/projects-select-template.png)

#### 3. GitHub teams
##### 3.1 About teams
1. Teams are groups of organization members that reflect your company or group's structure with cascading access permissions and mentions.
2. Organization owners and team maintainers can give teams admin, read, or write access to organization repositories. Organization members can send a notification to an entire team by mentioning the team's name. Organization members can also send a notification to an entire team by requesting a review from that team. Organization members can request reviews from specific teams with read access to the repository where the pull request is opened. Teams can be designated as owners of certain types or areas of code in a CODEOWNERS file.

##### 3.2 Creating new organization teams
1. In the top right corner of GitHub.com, click your profile photo, then click Your organizations.


![This is an image](https://docs.github.com/assets/cb-10767/images/help/profile/your-organizations.png)


2. Click the name of your organization.

![This is an image](https://docs.github.com/assets/cb-5513/images/help/organizations/org-settings-link.png)

3. Under your organization name, click  Teams.

![This is an image](https://docs.github.com/assets/cb-18161/images/help/organizations/organization-teams-tab-with-overview.png)

4. On the right side of the Teams tab, click New team.

![This is an image](https://docs.github.com/assets/cb-16221/images/help/teams/new-team-button.png)

5. Under "Create new team", type the name for your new team.

![This is an image](https://docs.github.com/assets/cb-13466/images/help/teams/org-new-team-name.png)

6. Optionally, in the "Description" field, type a description of the team.

![This is an image](https://docs.github.com/assets/cb-13311/images/help/teams/org-team-description.png)

7. Optionally, if you're creating a child team, use the drop-down menu to choose a parent team for your new team.

![This is an image](https://docs.github.com/assets/cb-13924/images/help/teams/choose-parent-team.png)

8. Decide whether the team will be visible or secret.

![This is an image](https://docs.github.com/assets/cb-20485/images/help/teams/new-team-visibility.png)

9. Click Create team.

10. Optionally, give the team access to organization repositories.

#### 4. GitHub issues
##### 4.1 About teams
1. Issues let you track your work on GitHub, where development happens. When you mention an issue in another issue or pull request, the issue's timeline reflects the cross-reference so that you can keep track of related work. To indicate that work is in progress, you can link an issue to a pull request. When the pull request merges, the linked issue automatically closes.
2. You can organize and prioritize issues with projects. To track issues as part of a larger issue, you can use task lists. To categorize related issues, you can use labels and milestones.
3. To stay updated on the most recent comments in an issue, you can subscribe to an issue to receive notifications about the latest comments. 
4. You can **@mention** collaborators who have access to your repository in an issue to draw their attention to a comment. To link related issues in the same repository, you can type # followed by part of the issue title and then clicking the issue that you want to link.

##### 4.2 Creating new issues
1. On GitHub.com, navigate to the main page of the repository.

2. Under your repository name, click  Issues.

![repo-tabs-issues](https://user-images.githubusercontent.com/108261855/187608988-fd999690-f9fd-496c-ad9e-507de752390e.png)

3. Click New issue.

![new_issues_button](https://user-images.githubusercontent.com/108261855/187609058-1034392c-b62f-44bf-be41-178d9ec637eb.png)

4. If your repository uses issue templates, click Get started next to the type of issue you'd like to open.

![issue_template_get_started_button](https://user-images.githubusercontent.com/108261855/187609108-5421afbd-ad90-4903-bb94-74f3b8af0f3c.png)

Or, click Open a blank issue if the type of issue you'd like to open isn't included in the available options.

![blank_issue_link](https://user-images.githubusercontent.com/108261855/187609159-7ebf2619-01cc-487b-90d7-f15b6800a927.png)

5. Type a title and description for your issue.

![sample_issue](https://user-images.githubusercontent.com/108261855/187609212-52bcdd19-fffd-4e91-a748-0be9310824dd.png)

6. If you're a project maintainer, you can assign the issue to someone, add it to a project board, associate it with a milestone, or apply a label.

7. When you're finished, click Submit new issue.

#### 5. GitHub pull requests
##### 5.1 About pull requests
1. Pull requests let you tell others about changes you've pushed to a branch in a repository on GitHub. Once a pull request is opened, you can discuss and review the potential changes with collaborators and add follow-up commits before your changes are merged into the base branch.
2. You can create pull requests on GitHub.com, with GitHub Desktop, in GitHub Codespaces, on GitHub Mobile, and when using GitHub CLI. After initializing a pull request, you'll see a review page that shows a high-level overview of the changes between your branch (the compare branch) and the repository's base branch. You can add a summary of the proposed changes, review the changes made by commits, add labels, milestones, and assignees, and @mention individual contributors or teams.
3. Once you've created a pull request, you can push commits from your topic branch to add them to your existing pull request. These commits will appear in chronological order within your pull request and the changes will be visible in the "Files changed" tab. Other contributors can review your proposed changes, add review comments, contribute to the pull request discussion, and even add commits to the pull request.

##### 5.2 Creating a pull request
1. On GitHub.com, navigate to the main page of the repository.
2. In the "Branch" menu, choose the branch that contains your commits.

![branch-dropdown](https://user-images.githubusercontent.com/108261855/187610772-6d68d4e0-0c5c-47ef-903f-f2e60b7f57eb.png)

3. Above the list of files, click  Pull request.

![pull-request-start-review-button](https://user-images.githubusercontent.com/108261855/187610829-676086bf-054a-4a4d-8c86-7ec7a9e5f1a9.png)

4. Use the base branch dropdown menu to select the branch you'd like to merge your changes into, then use the compare branch drop-down menu to choose the topic branch you made your changes in.

![choose-base-and-compare-branches](https://user-images.githubusercontent.com/108261855/187610893-615f0dd8-d1dd-4916-9cf7-1e1835ad7840.png)

5. Type a title and description for your pull request.

![pullrequest-description](https://user-images.githubusercontent.com/108261855/187610965-e417c739-bb63-413a-b9bb-a93f87244892.png)

6. To create a pull request that is ready for review, click Create Pull Request. To create a draft pull request, use the drop-down and select Create Draft Pull Request, then click Draft Pull Request.

![pullrequest-send](https://user-images.githubusercontent.com/108261855/187611040-cfa98b31-0250-4bd4-8923-03155803e4ff.png)

7. After your pull request has been reviewed, it can be merged into the repository.
