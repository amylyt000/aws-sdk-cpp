﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codecommit/model/BatchGetRepositoriesResult.h>
#include <aws/codecommit/model/CreateRepositoryResult.h>
#include <aws/codecommit/model/DeleteRepositoryResult.h>
#include <aws/codecommit/model/GetBlobResult.h>
#include <aws/codecommit/model/GetBranchResult.h>
#include <aws/codecommit/model/GetCommitResult.h>
#include <aws/codecommit/model/GetDifferencesResult.h>
#include <aws/codecommit/model/GetRepositoryResult.h>
#include <aws/codecommit/model/GetRepositoryTriggersResult.h>
#include <aws/codecommit/model/ListBranchesResult.h>
#include <aws/codecommit/model/ListRepositoriesResult.h>
#include <aws/codecommit/model/PutRepositoryTriggersResult.h>
#include <aws/codecommit/model/TestRepositoryTriggersResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace CodeCommit
{

namespace Model
{
        class BatchGetRepositoriesRequest;
        class CreateBranchRequest;
        class CreateRepositoryRequest;
        class DeleteRepositoryRequest;
        class GetBlobRequest;
        class GetBranchRequest;
        class GetCommitRequest;
        class GetDifferencesRequest;
        class GetRepositoryRequest;
        class GetRepositoryTriggersRequest;
        class ListBranchesRequest;
        class ListRepositoriesRequest;
        class PutRepositoryTriggersRequest;
        class TestRepositoryTriggersRequest;
        class UpdateDefaultBranchRequest;
        class UpdateRepositoryDescriptionRequest;
        class UpdateRepositoryNameRequest;

        typedef Aws::Utils::Outcome<BatchGetRepositoriesResult, Aws::Client::AWSError<CodeCommitErrors>> BatchGetRepositoriesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeCommitErrors>> CreateBranchOutcome;
        typedef Aws::Utils::Outcome<CreateRepositoryResult, Aws::Client::AWSError<CodeCommitErrors>> CreateRepositoryOutcome;
        typedef Aws::Utils::Outcome<DeleteRepositoryResult, Aws::Client::AWSError<CodeCommitErrors>> DeleteRepositoryOutcome;
        typedef Aws::Utils::Outcome<GetBlobResult, Aws::Client::AWSError<CodeCommitErrors>> GetBlobOutcome;
        typedef Aws::Utils::Outcome<GetBranchResult, Aws::Client::AWSError<CodeCommitErrors>> GetBranchOutcome;
        typedef Aws::Utils::Outcome<GetCommitResult, Aws::Client::AWSError<CodeCommitErrors>> GetCommitOutcome;
        typedef Aws::Utils::Outcome<GetDifferencesResult, Aws::Client::AWSError<CodeCommitErrors>> GetDifferencesOutcome;
        typedef Aws::Utils::Outcome<GetRepositoryResult, Aws::Client::AWSError<CodeCommitErrors>> GetRepositoryOutcome;
        typedef Aws::Utils::Outcome<GetRepositoryTriggersResult, Aws::Client::AWSError<CodeCommitErrors>> GetRepositoryTriggersOutcome;
        typedef Aws::Utils::Outcome<ListBranchesResult, Aws::Client::AWSError<CodeCommitErrors>> ListBranchesOutcome;
        typedef Aws::Utils::Outcome<ListRepositoriesResult, Aws::Client::AWSError<CodeCommitErrors>> ListRepositoriesOutcome;
        typedef Aws::Utils::Outcome<PutRepositoryTriggersResult, Aws::Client::AWSError<CodeCommitErrors>> PutRepositoryTriggersOutcome;
        typedef Aws::Utils::Outcome<TestRepositoryTriggersResult, Aws::Client::AWSError<CodeCommitErrors>> TestRepositoryTriggersOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeCommitErrors>> UpdateDefaultBranchOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeCommitErrors>> UpdateRepositoryDescriptionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<CodeCommitErrors>> UpdateRepositoryNameOutcome;

        typedef std::future<BatchGetRepositoriesOutcome> BatchGetRepositoriesOutcomeCallable;
        typedef std::future<CreateBranchOutcome> CreateBranchOutcomeCallable;
        typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
        typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
        typedef std::future<GetBlobOutcome> GetBlobOutcomeCallable;
        typedef std::future<GetBranchOutcome> GetBranchOutcomeCallable;
        typedef std::future<GetCommitOutcome> GetCommitOutcomeCallable;
        typedef std::future<GetDifferencesOutcome> GetDifferencesOutcomeCallable;
        typedef std::future<GetRepositoryOutcome> GetRepositoryOutcomeCallable;
        typedef std::future<GetRepositoryTriggersOutcome> GetRepositoryTriggersOutcomeCallable;
        typedef std::future<ListBranchesOutcome> ListBranchesOutcomeCallable;
        typedef std::future<ListRepositoriesOutcome> ListRepositoriesOutcomeCallable;
        typedef std::future<PutRepositoryTriggersOutcome> PutRepositoryTriggersOutcomeCallable;
        typedef std::future<TestRepositoryTriggersOutcome> TestRepositoryTriggersOutcomeCallable;
        typedef std::future<UpdateDefaultBranchOutcome> UpdateDefaultBranchOutcomeCallable;
        typedef std::future<UpdateRepositoryDescriptionOutcome> UpdateRepositoryDescriptionOutcomeCallable;
        typedef std::future<UpdateRepositoryNameOutcome> UpdateRepositoryNameOutcomeCallable;
} // namespace Model

  class CodeCommitClient;

    typedef std::function<void(const CodeCommitClient*, const Model::BatchGetRepositoriesRequest&, const Model::BatchGetRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetRepositoriesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::CreateBranchRequest&, const Model::CreateBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBranchResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::CreateRepositoryRequest&, const Model::CreateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::DeleteRepositoryRequest&, const Model::DeleteRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetBlobRequest&, const Model::GetBlobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlobResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetBranchRequest&, const Model::GetBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBranchResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetCommitRequest&, const Model::GetCommitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCommitResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetDifferencesRequest&, const Model::GetDifferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDifferencesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetRepositoryRequest&, const Model::GetRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::GetRepositoryTriggersRequest&, const Model::GetRepositoryTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryTriggersResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::ListBranchesRequest&, const Model::ListBranchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBranchesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::ListRepositoriesRequest&, const Model::ListRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositoriesResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::PutRepositoryTriggersRequest&, const Model::PutRepositoryTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRepositoryTriggersResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::TestRepositoryTriggersRequest&, const Model::TestRepositoryTriggersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestRepositoryTriggersResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdateDefaultBranchRequest&, const Model::UpdateDefaultBranchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDefaultBranchResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdateRepositoryDescriptionRequest&, const Model::UpdateRepositoryDescriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRepositoryDescriptionResponseReceivedHandler;
    typedef std::function<void(const CodeCommitClient*, const Model::UpdateRepositoryNameRequest&, const Model::UpdateRepositoryNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRepositoryNameResponseReceivedHandler;

  /**
   * <fullname>AWS CodeCommit</fullname> <p>This is the <i>AWS CodeCommit API
   * Reference</i>. This reference provides descriptions of the operations and data
   * types for AWS CodeCommit API along with usage examples.</p> <p>You can use the
   * AWS CodeCommit API to work with the following objects:</p> <p>Repositories, by
   * calling the following:</p> <ul> <li> <p> <a>BatchGetRepositories</a>, which
   * returns information about one or more repositories associated with your AWS
   * account</p> </li> <li> <p> <a>CreateRepository</a>, which creates an AWS
   * CodeCommit repository</p> </li> <li> <p> <a>DeleteRepository</a>, which deletes
   * an AWS CodeCommit repository</p> </li> <li> <p> <a>GetRepository</a>, which
   * returns information about a specified repository</p> </li> <li> <p>
   * <a>ListRepositories</a>, which lists all AWS CodeCommit repositories associated
   * with your AWS account</p> </li> <li> <p> <a>UpdateRepositoryDescription</a>,
   * which sets or updates the description of the repository</p> </li> <li> <p>
   * <a>UpdateRepositoryName</a>, which changes the name of the repository. If you
   * change the name of a repository, no other users of that repository will be able
   * to access it until you send them the new HTTPS or SSH URL to use.</p> </li>
   * </ul> <p>Branches, by calling the following:</p> <ul> <li> <p>
   * <a>CreateBranch</a>, which creates a new branch in a specified repository</p>
   * </li> <li> <p> <a>GetBranch</a>, which returns information about a specified
   * branch</p> </li> <li> <p> <a>ListBranches</a>, which lists all branches for a
   * specified repository</p> </li> <li> <p> <a>UpdateDefaultBranch</a>, which
   * changes the default branch for a repository</p> </li> </ul> <p>Information about
   * committed code in a repository, by calling the following:</p> <ul> <li> <p>
   * <a>GetBlob</a>, which returns the base-64 encoded content of an individual Git
   * blob object within a repository</p> </li> <li> <p> <a>GetCommit</a>, which
   * returns information about a commit, including commit messages and author and
   * committer information</p> </li> <li> <p> <a>GetDifferences</a>, which returns
   * information about the differences in a valid commit specifier (such as a branch,
   * tag, HEAD, commit ID or other fully qualified reference)</p> </li> </ul>
   * <p>Triggers, by calling the following:</p> <ul> <li> <p>
   * <a>GetRepositoryTriggers</a>, which returns information about triggers
   * configured for a repository</p> </li> <li> <p> <a>PutRepositoryTriggers</a>,
   * which replaces all triggers for a repository and can be used to create or delete
   * triggers</p> </li> <li> <p> <a>TestRepositoryTriggers</a>, which tests the
   * functionality of a repository trigger by sending data to the trigger target</p>
   * </li> </ul> <p>For information about how to use AWS CodeCommit, see the <a
   * href="http://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">AWS
   * CodeCommit User Guide</a>.</p>
   */
  class AWS_CODECOMMIT_API CodeCommitClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeCommitClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeCommitClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeCommitClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CodeCommitClient();


        /**
         * <p>Returns information about one or more repositories.</p> <note> <p>The
         * description field for a repository accepts all HTML characters and all valid
         * Unicode characters. Applications that do not HTML-encode the description and
         * display it in a web page could expose users to potentially malicious code. Make
         * sure that you HTML-encode the description field in any application that uses
         * this API to display the repository description on a web page.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetRepositoriesOutcome BatchGetRepositories(const Model::BatchGetRepositoriesRequest& request) const;

        /**
         * <p>Returns information about one or more repositories.</p> <note> <p>The
         * description field for a repository accepts all HTML characters and all valid
         * Unicode characters. Applications that do not HTML-encode the description and
         * display it in a web page could expose users to potentially malicious code. Make
         * sure that you HTML-encode the description field in any application that uses
         * this API to display the repository description on a web page.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetRepositories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetRepositoriesOutcomeCallable BatchGetRepositoriesCallable(const Model::BatchGetRepositoriesRequest& request) const;

        /**
         * <p>Returns information about one or more repositories.</p> <note> <p>The
         * description field for a repository accepts all HTML characters and all valid
         * Unicode characters. Applications that do not HTML-encode the description and
         * display it in a web page could expose users to potentially malicious code. Make
         * sure that you HTML-encode the description field in any application that uses
         * this API to display the repository description on a web page.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetRepositories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetRepositoriesAsync(const Model::BatchGetRepositoriesRequest& request, const BatchGetRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new branch in a repository and points the branch to a commit.</p>
         * <note> <p>Calling the create branch operation does not set a repository's
         * default branch. To do this, call the update default branch operation.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBranchOutcome CreateBranch(const Model::CreateBranchRequest& request) const;

        /**
         * <p>Creates a new branch in a repository and points the branch to a commit.</p>
         * <note> <p>Calling the create branch operation does not set a repository's
         * default branch. To do this, call the update default branch operation.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateBranch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBranchOutcomeCallable CreateBranchCallable(const Model::CreateBranchRequest& request) const;

        /**
         * <p>Creates a new branch in a repository and points the branch to a commit.</p>
         * <note> <p>Calling the create branch operation does not set a repository's
         * default branch. To do this, call the update default branch operation.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateBranch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBranchAsync(const Model::CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new, empty repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRepositoryOutcome CreateRepository(const Model::CreateRepositoryRequest& request) const;

        /**
         * <p>Creates a new, empty repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRepositoryOutcomeCallable CreateRepositoryCallable(const Model::CreateRepositoryRequest& request) const;

        /**
         * <p>Creates a new, empty repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/CreateRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRepositoryAsync(const Model::CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a repository. If a specified repository was already deleted, a null
         * repository ID will be returned.</p> <important><p>Deleting a repository also
         * deletes all associated objects and metadata. After a repository is deleted, all
         * future push calls to the deleted repository will fail.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryOutcome DeleteRepository(const Model::DeleteRepositoryRequest& request) const;

        /**
         * <p>Deletes a repository. If a specified repository was already deleted, a null
         * repository ID will be returned.</p> <important><p>Deleting a repository also
         * deletes all associated objects and metadata. After a repository is deleted, all
         * future push calls to the deleted repository will fail.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRepositoryOutcomeCallable DeleteRepositoryCallable(const Model::DeleteRepositoryRequest& request) const;

        /**
         * <p>Deletes a repository. If a specified repository was already deleted, a null
         * repository ID will be returned.</p> <important><p>Deleting a repository also
         * deletes all associated objects and metadata. After a repository is deleted, all
         * future push calls to the deleted repository will fail.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DeleteRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRepositoryAsync(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the base-64 encoded content of an individual blob within a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBlob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlobOutcome GetBlob(const Model::GetBlobRequest& request) const;

        /**
         * <p>Returns the base-64 encoded content of an individual blob within a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBlob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBlobOutcomeCallable GetBlobCallable(const Model::GetBlobRequest& request) const;

        /**
         * <p>Returns the base-64 encoded content of an individual blob within a
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBlob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBlobAsync(const Model::GetBlobRequest& request, const GetBlobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a repository branch, including its name and the
         * last commit ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBranchOutcome GetBranch(const Model::GetBranchRequest& request) const;

        /**
         * <p>Returns information about a repository branch, including its name and the
         * last commit ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBranch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBranchOutcomeCallable GetBranchCallable(const Model::GetBranchRequest& request) const;

        /**
         * <p>Returns information about a repository branch, including its name and the
         * last commit ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetBranch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBranchAsync(const Model::GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a commit, including commit message and committer
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCommitOutcome GetCommit(const Model::GetCommitRequest& request) const;

        /**
         * <p>Returns information about a commit, including commit message and committer
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCommitOutcomeCallable GetCommitCallable(const Model::GetCommitRequest& request) const;

        /**
         * <p>Returns information about a commit, including commit message and committer
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetCommit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCommitAsync(const Model::GetCommitRequest& request, const GetCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the differences in a valid commit specifier (such
         * as a branch, tag, HEAD, commit ID or other fully qualified reference). Results
         * can be limited to a specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetDifferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDifferencesOutcome GetDifferences(const Model::GetDifferencesRequest& request) const;

        /**
         * <p>Returns information about the differences in a valid commit specifier (such
         * as a branch, tag, HEAD, commit ID or other fully qualified reference). Results
         * can be limited to a specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetDifferences">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDifferencesOutcomeCallable GetDifferencesCallable(const Model::GetDifferencesRequest& request) const;

        /**
         * <p>Returns information about the differences in a valid commit specifier (such
         * as a branch, tag, HEAD, commit ID or other fully qualified reference). Results
         * can be limited to a specified path.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetDifferences">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDifferencesAsync(const Model::GetDifferencesRequest& request, const GetDifferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a repository.</p> <note> <p>The description field
         * for a repository accepts all HTML characters and all valid Unicode characters.
         * Applications that do not HTML-encode the description and display it in a web
         * page could expose users to potentially malicious code. Make sure that you
         * HTML-encode the description field in any application that uses this API to
         * display the repository description on a web page.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepository">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryOutcome GetRepository(const Model::GetRepositoryRequest& request) const;

        /**
         * <p>Returns information about a repository.</p> <note> <p>The description field
         * for a repository accepts all HTML characters and all valid Unicode characters.
         * Applications that do not HTML-encode the description and display it in a web
         * page could expose users to potentially malicious code. Make sure that you
         * HTML-encode the description field in any application that uses this API to
         * display the repository description on a web page.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepository">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRepositoryOutcomeCallable GetRepositoryCallable(const Model::GetRepositoryRequest& request) const;

        /**
         * <p>Returns information about a repository.</p> <note> <p>The description field
         * for a repository accepts all HTML characters and all valid Unicode characters.
         * Applications that do not HTML-encode the description and display it in a web
         * page could expose users to potentially malicious code. Make sure that you
         * HTML-encode the description field in any application that uses this API to
         * display the repository description on a web page.</p> </note><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepository">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRepositoryAsync(const Model::GetRepositoryRequest& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about triggers configured for a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepositoryTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryTriggersOutcome GetRepositoryTriggers(const Model::GetRepositoryTriggersRequest& request) const;

        /**
         * <p>Gets information about triggers configured for a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepositoryTriggers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRepositoryTriggersOutcomeCallable GetRepositoryTriggersCallable(const Model::GetRepositoryTriggersRequest& request) const;

        /**
         * <p>Gets information about triggers configured for a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/GetRepositoryTriggers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRepositoryTriggersAsync(const Model::GetRepositoryTriggersRequest& request, const GetRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more branches in a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListBranches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBranchesOutcome ListBranches(const Model::ListBranchesRequest& request) const;

        /**
         * <p>Gets information about one or more branches in a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListBranches">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBranchesOutcomeCallable ListBranchesCallable(const Model::ListBranchesRequest& request) const;

        /**
         * <p>Gets information about one or more branches in a repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListBranches">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBranchesAsync(const Model::ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about one or more repositories.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositories">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoriesOutcome ListRepositories(const Model::ListRepositoriesRequest& request) const;

        /**
         * <p>Gets information about one or more repositories.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositories">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRepositoriesOutcomeCallable ListRepositoriesCallable(const Model::ListRepositoriesRequest& request) const;

        /**
         * <p>Gets information about one or more repositories.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ListRepositories">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRepositoriesAsync(const Model::ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces all triggers for a repository. This can be used to create or delete
         * triggers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutRepositoryTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRepositoryTriggersOutcome PutRepositoryTriggers(const Model::PutRepositoryTriggersRequest& request) const;

        /**
         * <p>Replaces all triggers for a repository. This can be used to create or delete
         * triggers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutRepositoryTriggers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutRepositoryTriggersOutcomeCallable PutRepositoryTriggersCallable(const Model::PutRepositoryTriggersRequest& request) const;

        /**
         * <p>Replaces all triggers for a repository. This can be used to create or delete
         * triggers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutRepositoryTriggers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutRepositoryTriggersAsync(const Model::PutRepositoryTriggersRequest& request, const PutRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests the functionality of repository triggers by sending information to the
         * trigger target. If real data is available in the repository, the test will send
         * data from the last commit. If no data is available, sample data will be
         * generated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TestRepositoryTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::TestRepositoryTriggersOutcome TestRepositoryTriggers(const Model::TestRepositoryTriggersRequest& request) const;

        /**
         * <p>Tests the functionality of repository triggers by sending information to the
         * trigger target. If real data is available in the repository, the test will send
         * data from the last commit. If no data is available, sample data will be
         * generated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TestRepositoryTriggers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestRepositoryTriggersOutcomeCallable TestRepositoryTriggersCallable(const Model::TestRepositoryTriggersRequest& request) const;

        /**
         * <p>Tests the functionality of repository triggers by sending information to the
         * trigger target. If real data is available in the repository, the test will send
         * data from the last commit. If no data is available, sample data will be
         * generated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/TestRepositoryTriggers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestRepositoryTriggersAsync(const Model::TestRepositoryTriggersRequest& request, const TestRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets or changes the default branch name for the specified repository.</p>
         * <note> <p>If you use this operation to change the default branch name to the
         * current default branch name, a success message is returned even though the
         * default branch did not change.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateDefaultBranch">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDefaultBranchOutcome UpdateDefaultBranch(const Model::UpdateDefaultBranchRequest& request) const;

        /**
         * <p>Sets or changes the default branch name for the specified repository.</p>
         * <note> <p>If you use this operation to change the default branch name to the
         * current default branch name, a success message is returned even though the
         * default branch did not change.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateDefaultBranch">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDefaultBranchOutcomeCallable UpdateDefaultBranchCallable(const Model::UpdateDefaultBranchRequest& request) const;

        /**
         * <p>Sets or changes the default branch name for the specified repository.</p>
         * <note> <p>If you use this operation to change the default branch name to the
         * current default branch name, a success message is returned even though the
         * default branch did not change.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateDefaultBranch">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDefaultBranchAsync(const Model::UpdateDefaultBranchRequest& request, const UpdateDefaultBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets or changes the comment or description for a repository.</p> <note>
         * <p>The description field for a repository accepts all HTML characters and all
         * valid Unicode characters. Applications that do not HTML-encode the description
         * and display it in a web page could expose users to potentially malicious code.
         * Make sure that you HTML-encode the description field in any application that
         * uses this API to display the repository description on a web page.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRepositoryDescriptionOutcome UpdateRepositoryDescription(const Model::UpdateRepositoryDescriptionRequest& request) const;

        /**
         * <p>Sets or changes the comment or description for a repository.</p> <note>
         * <p>The description field for a repository accepts all HTML characters and all
         * valid Unicode characters. Applications that do not HTML-encode the description
         * and display it in a web page could expose users to potentially malicious code.
         * Make sure that you HTML-encode the description field in any application that
         * uses this API to display the repository description on a web page.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryDescription">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRepositoryDescriptionOutcomeCallable UpdateRepositoryDescriptionCallable(const Model::UpdateRepositoryDescriptionRequest& request) const;

        /**
         * <p>Sets or changes the comment or description for a repository.</p> <note>
         * <p>The description field for a repository accepts all HTML characters and all
         * valid Unicode characters. Applications that do not HTML-encode the description
         * and display it in a web page could expose users to potentially malicious code.
         * Make sure that you HTML-encode the description field in any application that
         * uses this API to display the repository description on a web page.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryDescription">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRepositoryDescriptionAsync(const Model::UpdateRepositoryDescriptionRequest& request, const UpdateRepositoryDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Renames a repository. The repository name must be unique across the calling
         * AWS account. In addition, repository names are limited to 100 alphanumeric,
         * dash, and underscore characters, and cannot include certain characters. The
         * suffix ".git" is prohibited. For a full description of the limits on repository
         * names, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
         * in the AWS CodeCommit User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRepositoryNameOutcome UpdateRepositoryName(const Model::UpdateRepositoryNameRequest& request) const;

        /**
         * <p>Renames a repository. The repository name must be unique across the calling
         * AWS account. In addition, repository names are limited to 100 alphanumeric,
         * dash, and underscore characters, and cannot include certain characters. The
         * suffix ".git" is prohibited. For a full description of the limits on repository
         * names, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
         * in the AWS CodeCommit User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryName">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRepositoryNameOutcomeCallable UpdateRepositoryNameCallable(const Model::UpdateRepositoryNameRequest& request) const;

        /**
         * <p>Renames a repository. The repository name must be unique across the calling
         * AWS account. In addition, repository names are limited to 100 alphanumeric,
         * dash, and underscore characters, and cannot include certain characters. The
         * suffix ".git" is prohibited. For a full description of the limits on repository
         * names, see <a
         * href="http://docs.aws.amazon.com/codecommit/latest/userguide/limits.html">Limits</a>
         * in the AWS CodeCommit User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/UpdateRepositoryName">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRepositoryNameAsync(const Model::UpdateRepositoryNameRequest& request, const UpdateRepositoryNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void BatchGetRepositoriesAsyncHelper(const Model::BatchGetRepositoriesRequest& request, const BatchGetRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBranchAsyncHelper(const Model::CreateBranchRequest& request, const CreateBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRepositoryAsyncHelper(const Model::CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRepositoryAsyncHelper(const Model::DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBlobAsyncHelper(const Model::GetBlobRequest& request, const GetBlobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBranchAsyncHelper(const Model::GetBranchRequest& request, const GetBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCommitAsyncHelper(const Model::GetCommitRequest& request, const GetCommitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDifferencesAsyncHelper(const Model::GetDifferencesRequest& request, const GetDifferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRepositoryAsyncHelper(const Model::GetRepositoryRequest& request, const GetRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRepositoryTriggersAsyncHelper(const Model::GetRepositoryTriggersRequest& request, const GetRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBranchesAsyncHelper(const Model::ListBranchesRequest& request, const ListBranchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRepositoriesAsyncHelper(const Model::ListRepositoriesRequest& request, const ListRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutRepositoryTriggersAsyncHelper(const Model::PutRepositoryTriggersRequest& request, const PutRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestRepositoryTriggersAsyncHelper(const Model::TestRepositoryTriggersRequest& request, const TestRepositoryTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDefaultBranchAsyncHelper(const Model::UpdateDefaultBranchRequest& request, const UpdateDefaultBranchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRepositoryDescriptionAsyncHelper(const Model::UpdateRepositoryDescriptionRequest& request, const UpdateRepositoryDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRepositoryNameAsyncHelper(const Model::UpdateRepositoryNameRequest& request, const UpdateRepositoryNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CodeCommit
} // namespace Aws
