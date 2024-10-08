// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gcsystemmsgs.proto

#ifndef PROTOBUF_gcsystemmsgs_2eproto__INCLUDED
#define PROTOBUF_gcsystemmsgs_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_gcsystemmsgs_2eproto();
void protobuf_AssignDesc_gcsystemmsgs_2eproto();
void protobuf_ShutdownFile_gcsystemmsgs_2eproto();


enum EGCSystemMsg {
  k_EGCMsgInvalid = 0,
  k_EGCMsgMulti = 1,
  k_EGCMsgGenericReply = 10,
  k_EGCMsgSystemBase = 50,
  k_EGCMsgAchievementAwarded = 51,
  k_EGCMsgConCommand = 52,
  k_EGCMsgStartPlaying = 53,
  k_EGCMsgStopPlaying = 54,
  k_EGCMsgStartGameserver = 55,
  k_EGCMsgStopGameserver = 56,
  k_EGCMsgWGRequest = 57,
  k_EGCMsgWGResponse = 58,
  k_EGCMsgGetUserGameStatsSchema = 59,
  k_EGCMsgGetUserGameStatsSchemaResponse = 60,
  k_EGCMsgGetUserStatsDEPRECATED = 61,
  k_EGCMsgGetUserStatsResponse = 62,
  k_EGCMsgAppInfoUpdated = 63,
  k_EGCMsgValidateSession = 64,
  k_EGCMsgValidateSessionResponse = 65,
  k_EGCMsgLookupAccountFromInput = 66,
  k_EGCMsgSendHTTPRequest = 67,
  k_EGCMsgSendHTTPRequestResponse = 68,
  k_EGCMsgPreTestSetup = 69,
  k_EGCMsgRecordSupportAction = 70,
  k_EGCMsgGetAccountDetails_DEPRECATED = 71,
  k_EGCMsgReceiveInterAppMessage = 73,
  k_EGCMsgFindAccounts = 74,
  k_EGCMsgPostAlert = 75,
  k_EGCMsgGetLicenses = 76,
  k_EGCMsgGetUserStats = 77,
  k_EGCMsgGetCommands = 78,
  k_EGCMsgGetCommandsResponse = 79,
  k_EGCMsgAddFreeLicense = 80,
  k_EGCMsgAddFreeLicenseResponse = 81,
  k_EGCMsgGetIPLocation = 82,
  k_EGCMsgGetIPLocationResponse = 83,
  k_EGCMsgSystemStatsSchema = 84,
  k_EGCMsgGetSystemStats = 85,
  k_EGCMsgGetSystemStatsResponse = 86,
  k_EGCMsgSendEmail = 87,
  k_EGCMsgSendEmailResponse = 88,
  k_EGCMsgGetEmailTemplate = 89,
  k_EGCMsgGetEmailTemplateResponse = 90,
  k_EGCMsgGrantGuestPass = 91,
  k_EGCMsgGrantGuestPassResponse = 92,
  k_EGCMsgGetAccountDetails = 93,
  k_EGCMsgGetAccountDetailsResponse = 94,
  k_EGCMsgGetPersonaNames = 95,
  k_EGCMsgGetPersonaNamesResponse = 96,
  k_EGCMsgMultiplexMsg = 97,
  k_EGCMsgWebAPIRegisterInterfaces = 101,
  k_EGCMsgWebAPIJobRequest = 102,
  k_EGCMsgWebAPIJobRequestHttpResponse = 104,
  k_EGCMsgWebAPIJobRequestForwardResponse = 105,
  k_EGCMsgMemCachedGet = 200,
  k_EGCMsgMemCachedGetResponse = 201,
  k_EGCMsgMemCachedSet = 202,
  k_EGCMsgMemCachedDelete = 203,
  k_EGCMsgMemCachedStats = 204,
  k_EGCMsgMemCachedStatsResponse = 205,
  k_EGCMsgSQLStats = 210,
  k_EGCMsgSQLStatsResponse = 211,
  k_EGCMsgMasterSetDirectory = 220,
  k_EGCMsgMasterSetDirectoryResponse = 221,
  k_EGCMsgMasterSetWebAPIRouting = 222,
  k_EGCMsgMasterSetWebAPIRoutingResponse = 223,
  k_EGCMsgMasterSetClientMsgRouting = 224,
  k_EGCMsgMasterSetClientMsgRoutingResponse = 225,
  k_EGCMsgSetOptions = 226,
  k_EGCMsgSetOptionsResponse = 227,
  k_EGCMsgSystemBase2 = 500,
  k_EGCMsgGetPurchaseTrustStatus = 501,
  k_EGCMsgGetPurchaseTrustStatusResponse = 502,
  k_EGCMsgUpdateSession = 503,
  k_EGCMsgGCAccountVacStatusChange = 504,
  k_EGCMsgCheckFriendship = 505,
  k_EGCMsgCheckFriendshipResponse = 506,
  k_EGCMsgGetPartnerAccountLink = 507,
  k_EGCMsgGetPartnerAccountLinkResponse = 508,
  k_EGCMsgVSReportedSuspiciousActivity = 509,
  k_EGCMsgAccountTradeBanStatusChange = 510,
  k_EGCMsgAccountLockStatusChange = 511,
  k_EGCMsgDPPartnerMicroTxns = 512,
  k_EGCMsgDPPartnerMicroTxnsResponse = 513,
  k_EGCMsgGetIPASN = 514,
  k_EGCMsgGetIPASNResponse = 515,
  k_EGCMsgGetAppFriendsList = 516,
  k_EGCMsgGetAppFriendsListResponse = 517,
  k_EGCMsgVacVerificationChange = 518,
  k_EGCMsgAccountPhoneNumberChange = 519,
  k_EGCMsgAccountTwoFactorChange = 520,
  k_EGCMsgCheckClanMembership = 521,
  k_EGCMsgCheckClanMembershipResponse = 522
};
bool EGCSystemMsg_IsValid(int value);
const EGCSystemMsg EGCSystemMsg_MIN = k_EGCMsgInvalid;
const EGCSystemMsg EGCSystemMsg_MAX = k_EGCMsgCheckClanMembershipResponse;
const int EGCSystemMsg_ARRAYSIZE = EGCSystemMsg_MAX + 1;

const ::google::protobuf::EnumDescriptor* EGCSystemMsg_descriptor();
inline const ::std::string& EGCSystemMsg_Name(EGCSystemMsg value) {
  return ::google::protobuf::internal::NameOfEnum(
    EGCSystemMsg_descriptor(), value);
}
inline bool EGCSystemMsg_Parse(
    const ::std::string& name, EGCSystemMsg* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EGCSystemMsg>(
    EGCSystemMsg_descriptor(), name, value);
}
enum ESOMsg {
  k_ESOMsg_Create = 21,
  k_ESOMsg_Update = 22,
  k_ESOMsg_Destroy = 23,
  k_ESOMsg_CacheSubscribed = 24,
  k_ESOMsg_CacheUnsubscribed = 25,
  k_ESOMsg_UpdateMultiple = 26,
  k_ESOMsg_CacheSubscriptionCheck = 27,
  k_ESOMsg_CacheSubscriptionRefresh = 28,
  k_ESOMsg_CacheSubscribedUpToDate = 29
};
bool ESOMsg_IsValid(int value);
const ESOMsg ESOMsg_MIN = k_ESOMsg_Create;
const ESOMsg ESOMsg_MAX = k_ESOMsg_CacheSubscribedUpToDate;
const int ESOMsg_ARRAYSIZE = ESOMsg_MAX + 1;

const ::google::protobuf::EnumDescriptor* ESOMsg_descriptor();
inline const ::std::string& ESOMsg_Name(ESOMsg value) {
  return ::google::protobuf::internal::NameOfEnum(
    ESOMsg_descriptor(), value);
}
inline bool ESOMsg_Parse(
    const ::std::string& name, ESOMsg* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ESOMsg>(
    ESOMsg_descriptor(), name, value);
}
enum EGCBaseClientMsg {
  k_EMsgGCPingRequest = 3001,
  k_EMsgGCPingResponse = 3002,
  k_EMsgGCClientWelcome = 4004,
  k_EMsgGCServerWelcome = 4005,
  k_EMsgGCClientHello = 4006,
  k_EMsgGCServerHello = 4007,
  k_EMsgGCClientGoodbye = 4008,
  k_EMsgGCServerGoodbye = 4009
};
bool EGCBaseClientMsg_IsValid(int value);
const EGCBaseClientMsg EGCBaseClientMsg_MIN = k_EMsgGCPingRequest;
const EGCBaseClientMsg EGCBaseClientMsg_MAX = k_EMsgGCServerGoodbye;
const int EGCBaseClientMsg_ARRAYSIZE = EGCBaseClientMsg_MAX + 1;

const ::google::protobuf::EnumDescriptor* EGCBaseClientMsg_descriptor();
inline const ::std::string& EGCBaseClientMsg_Name(EGCBaseClientMsg value) {
  return ::google::protobuf::internal::NameOfEnum(
    EGCBaseClientMsg_descriptor(), value);
}
inline bool EGCBaseClientMsg_Parse(
    const ::std::string& name, EGCBaseClientMsg* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EGCBaseClientMsg>(
    EGCBaseClientMsg_descriptor(), name, value);
}
enum EGCToGCMsg {
  k_EGCToGCMsgMasterAck = 150,
  k_EGCToGCMsgMasterAckResponse = 151,
  k_EGCToGCMsgRouted = 152,
  k_EGCToGCMsgRoutedReply = 153,
  k_EMsgGCUpdateSubGCSessionInfo = 154,
  k_EMsgGCRequestSubGCSessionInfo = 155,
  k_EMsgGCRequestSubGCSessionInfoResponse = 156,
  k_EGCToGCMsgMasterStartupComplete = 157,
  k_EMsgGCToGCSOCacheSubscribe = 158,
  k_EMsgGCToGCSOCacheUnsubscribe = 159
};
bool EGCToGCMsg_IsValid(int value);
const EGCToGCMsg EGCToGCMsg_MIN = k_EGCToGCMsgMasterAck;
const EGCToGCMsg EGCToGCMsg_MAX = k_EMsgGCToGCSOCacheUnsubscribe;
const int EGCToGCMsg_ARRAYSIZE = EGCToGCMsg_MAX + 1;

const ::google::protobuf::EnumDescriptor* EGCToGCMsg_descriptor();
inline const ::std::string& EGCToGCMsg_Name(EGCToGCMsg value) {
  return ::google::protobuf::internal::NameOfEnum(
    EGCToGCMsg_descriptor(), value);
}
inline bool EGCToGCMsg_Parse(
    const ::std::string& name, EGCToGCMsg* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EGCToGCMsg>(
    EGCToGCMsg_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::EGCSystemMsg> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EGCSystemMsg>() {
  return ::EGCSystemMsg_descriptor();
}
template <> struct is_proto_enum< ::ESOMsg> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ESOMsg>() {
  return ::ESOMsg_descriptor();
}
template <> struct is_proto_enum< ::EGCBaseClientMsg> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EGCBaseClientMsg>() {
  return ::EGCBaseClientMsg_descriptor();
}
template <> struct is_proto_enum< ::EGCToGCMsg> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EGCToGCMsg>() {
  return ::EGCToGCMsg_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_gcsystemmsgs_2eproto__INCLUDED
