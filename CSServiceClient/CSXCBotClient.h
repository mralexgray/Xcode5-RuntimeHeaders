/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CSRemoteServiceClient, CSXCActivityStreamClient, NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CSXCBotClient : NSObject
{
    NSString *serverAddress;
    int serverPort;
    int credentialServerPort;
    CSRemoteServiceClient *serviceClient;
    CSXCActivityStreamClient *activityStreamClient;
    id wakeObserver;
    NSObject<OS_dispatch_queue> *activityStreamReconnectQueue;
    NSObject<OS_dispatch_source> *activityStreamReconnectSource;
    id <CSXCBotClientNotificationDelegate> notificationDelegate;
    NSObject<OS_dispatch_queue> *errorLocalizationQueue;
    NSDictionary *errorLocalizationStrings;
    NSString *_sessionGUID;
}

+ (id)mapSCMFileStatusToCSSourceControlStatus:(id)arg1;
+ (void)initialize;
@property(retain) NSString *sessionGUID; // @synthesize sessionGUID=_sessionGUID;
- (void).cxx_destruct;
- (void)devicesForTeamIDs:(id)arg1 completionHandler:(id)arg2;
- (void)allDevicesCompletionHandler:(id)arg1;
- (void)uploadCredentialsForSCMInfo:(id)arg1 completionHandler:(id)arg2;
- (void)scmCommitsForBotRunGUID:(id)arg1 completionHandler:(id)arg2;
- (id)prepareTimeseriesDataForSummayGraphsInXcodeUsingBuildResultSummary:(id)arg1 andTestSummary:(id)arg2 error:(id *)arg3;
- (void)timeseriesSummaryForEntityGUID:(id)arg1 andCategory:(id)arg2 completionHandler:(id)arg3;
- (void)dataForSummaryGraphsUsingTimeseriesDataForBotGUID:(id)arg1 andRange:(struct _NSRange)arg2 completionHandler:(id)arg3;
- (void)dataForSummaryGraphsUsingTimeseriesDataForBotRunGUID:(id)arg1 completionHandler:(id)arg2;
- (id)prepareTimeseriesDataForTestResultsTableInXcodeUsingTestRunResult:(id)arg1 andTestSummaryResponse:(id)arg2 error:(id *)arg3;
- (void)deviceDataForTestResultsTableUsingTimeseriesDataForBotRunGUID:(id)arg1 completionHandler:(id)arg2;
- (id)mergeTestResults:(id)arg1 andTestSummaries:(id)arg2 error:(id *)arg3;
- (id)deviceInfoFromTags:(id)arg1;
- (id)deviceIDFromTags:(id)arg1;
- (void)dataForTestResultsTableUsingTimeseriesDataForBotGUID:(id)arg1 andRange:(struct _NSRange)arg2 completionHandler:(id)arg3;
- (void)dataForTestResultsTableUsingTimeseriesDataForBotRunGUID:(id)arg1 completionHandler:(id)arg2;
- (id)integrationInfoForBotRunGUIDs:(id)arg1 error:(id *)arg2;
- (id)createBatchedTimeseriesRunRequestForTimeseriesTuples:(id)arg1;
- (id)createBatchedTimeseriesRangeRequestForTimeseriesTuples:(id)arg1;
- (void)timeseriesDataForBotGUID:(id)arg1 andCategory:(id)arg2 inRange:(struct _NSRange)arg3 completionHandler:(id)arg4;
- (void)timeseriesDataForBotRunGUID:(id)arg1 andCategory:(id)arg2 completionHandler:(id)arg3;
- (void)updateEmailSubscriptionList:(id)arg1 forBotGUID:(id)arg2 notificationType:(id)arg3 completionHandler:(id)arg4;
- (void)emailSubscriptionListForBotGUID:(id)arg1 notificationType:(id)arg2 completionHandler:(id)arg3;
- (void)uploadCredentialForSCMInfo:(id)arg1 completionHandler:(id)arg2;
- (void)uploadCredentialsForSCMInfos:(id)arg1 completionHandler:(id)arg2;
- (void)createSCMInfos:(id)arg1 completionHandler:(id)arg2;
- (void)createSCMInfo:(id)arg1 completionHandler:(id)arg2;
- (void)allSCMInfosCompletionHandler:(id)arg1;
- (void)scmInfosForURIs:(id)arg1 completionHandler:(id)arg2;
- (void)scmInfosForGUIDs:(id)arg1 completionHandler:(id)arg2;
- (void)scmInfoForURI:(id)arg1 completionHandler:(id)arg2;
- (void)scmInfoForGUID:(id)arg1 completionHandler:(id)arg2;
- (void)stopActivityNotifications;
- (void)startActivityNotifications;
- (void)disableWorkScheduleForBotGUID:(id)arg1 completionHandler:(id)arg2;
- (void)enableWorkScheduleForBotGUID:(id)arg1 completionHandler:(id)arg2;
- (void)updateWorkSchedule:(id)arg1 completionHandler:(id)arg2;
- (void)workScheduleForBotGUID:(id)arg1 completionHandler:(id)arg2;
- (void)resumeBotRunWithGUID:(id)arg1 completionHandler:(id)arg2;
- (void)pauseBotRunWithGUID:(id)arg1 completionHandler:(id)arg2;
- (void)cancelBotRunWithGUID:(id)arg1 completionHandler:(id)arg2;
- (void)runCountForBotGUID:(id)arg1 completionHandler:(id)arg2;
- (void)botRunsForBotGUID:(id)arg1 inRange:(struct _NSRange)arg2 completionHandler:(id)arg3;
- (void)latestBotRunForBotGUID:(id)arg1 completionHandler:(id)arg2;
- (void)botRunForGUID:(id)arg1 completionHandler:(id)arg2;
- (void)startBotRunForBotGUID:(id)arg1 completionHandler:(id)arg2;
- (void)downloadFileDataEntityWithGUID:(id)arg1 toPath:(id)arg2 withProgressHandler:(id)arg3 completionHandler:(void)arg4;
- (void)downloadFileDataEntityWithGUID:(id)arg1 withProgressHandler:(id)arg2 completionHandler:(void)arg3;
- (void)downloadFileDataEntityWithGUID:(id)arg1 completionHandler:(id)arg2;
- (void)pruneArchiveAndProductForBotRunWithGUID:(id)arg1 completionHandler:(id)arg2;
- (void)deleteBotRunWithGUID:(id)arg1 completionHandler:(id)arg2;
- (void)deleteBotWithGUID:(id)arg1 completionHandler:(id)arg2;
- (void)allBotsInRange:(struct _NSRange)arg1 completionHandler:(id)arg2;
- (void)botForGUID:(id)arg1 completionHandler:(id)arg2;
- (void)entityForGUID:(id)arg1 completionHandler:(id)arg2;
- (void)updateBot:(id)arg1 scheduledAtRecurrences:(id)arg2 completionHandler:(id)arg3;
- (void)updateBot:(id)arg1 completionHandler:(id)arg2;
- (void)createBotWithProperties:(id)arg1 scheduledAtRecurrences:(id)arg2 completionHandler:(id)arg3;
- (void)createBotWithProperties:(id)arg1 completionHandler:(id)arg2;
- (void)canICreateBotsCompletionHandler:(id)arg1;
- (void)canIViewBotsCompletionHandler:(id)arg1;
- (void)createServerGitRepsoitoryWithName:(id)arg1 completionHandler:(id)arg2;
- (void)listServerGitRepositoriesCompletionHandler:(id)arg1;
- (void)canICreateRepositoriesCompletionHandler:(id)arg1;
- (void)pingCompletionHandler:(id)arg1;
- (void)isServerEnabledCompletionHandler:(id)arg1;
- (void)currentUserLoginCompletionHandler:(id)arg1;
- (void)logoutCompletionHandler:(id)arg1;
- (void)authenticateWithLogin:(id)arg1 andPassword:(id)arg2 completionHandler:(id)arg3;
- (void)initializeGuestSessionCompletionHandler:(id)arg1;
- (id)arrayFromRange:(struct _NSRange)arg1;
- (void)dispatchServiceRequest:(id)arg1 toNoArgCompletionBlock:(id)arg2;
- (void)dispatchBatchServiceRequest:(id)arg1 toCompletionBlock:(id)arg2;
- (void)dispatchServiceRequest:(id)arg1 toCompletionBlock:(id)arg2 checkServerEnabled:(void)arg3;
- (void)dispatchServiceRequest:(id)arg1 toCompletionBlock:(id)arg2;
- (void)checkIfServerEnabledCompletionBlock:(id)arg1;
- (id)responsesFromBatchServiceResponse:(id)arg1 error:(id *)arg2;
- (id)responseFromServiceResponse:(id)arg1 error:(id *)arg2;
- (id)repositoryServiceRequestForMethod:(id)arg1 args:(id)arg2;
- (id)authServiceRequestForMethod:(id)arg1 args:(id)arg2;
- (id)schedulerServiceRequestForMethod:(id)arg1 args:(id)arg2;
- (id)botServiceRequestForMethod:(id)arg1 args:(id)arg2;
- (id)contentServiceRequestForMethod:(id)arg1 args:(id)arg2;
- (id)graphServiceRequestForMethod:(id)arg1 args:(id)arg2;
- (id)xcServiceRequestForMethod:(id)arg1 args:(id)arg2;
- (void)dealloc;
- (id)initWithServerAddress:(id)arg1 andPort:(int)arg2 andPath:(id)arg3 notificationDelegate:(id)arg4;
- (id)initWithServerAddress:(id)arg1 andPort:(int)arg2 andPath:(id)arg3;
- (id)init;

@end

