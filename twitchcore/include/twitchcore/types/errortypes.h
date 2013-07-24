/********************************************************************************************
* Twitch Broadcasting SDK
*
* This software is supplied under the terms of a license agreement with Justin.tv Inc. and
* may not be copied or used except in accordance with the terms of that agreement
* Copyright (c) 2012-2013 Justin.tv Inc.
*********************************************************************************************/

#pragma once

/**
 * TTV_ErrorCode
 */
typedef enum
{
	// Warnings //////////////////////////////////////////////////

	TTV_EC_WARNING_START = -1000,
	TTV_WRN_MUTEX_LOCKED,
	TTV_WRN_FAILED_TO_INIT_MIC_CAPTURE,
	TTV_WRN_NOMOREDATA,
	TTV_WRN_FRAMES_QUEUEING,
	TTV_WRN_MUTEX_NOT_AQUIRED,
	TTV_WRN_PREV_GAME_NAME_MATCH_REQUEST_DROPPED,	//!< A previously pending request for matching game names was dropped in favor of the most recent request.
	TTV_WRN_DEPRECATED,
	TTV_WRN_CHAT_MESSAGE_SPAM_DISCARDED, //!< The client is submitting chat messages too quickly and the message was discarded.
	TTV_WRN_WAIT_TIMEOUT, //!< a thread wait timed out


	// Success //////////////////////////////////////////////////

	TTV_EC_SUCCESS = 0,


	// Errors //////////////////////////////////////////////////

	TTV_EC_UNKNOWN_ERROR,

	TTV_EC_CANNOT_OPEN_FILE,
	TTV_EC_ALREADY_INITIALIZED,
	TTV_EC_CANNOT_WRITE_TO_FILE,
	TTV_EC_CANNOT_CREATE_MUTEX,
	TTV_EC_CANNOT_DESTROY_MUTEX,
	TTV_EC_COULD_NOT_TAKE_MUTEX,
	TTV_EC_COULD_NOT_RELEASE_MUTEX,
	TTV_EC_INVALID_MUTEX,
	TTV_EC_WAIT_TIMED_OUT,
	TTV_EC_INVALID_ARG,
	TTV_EC_NOT_INITIALIZED,
	TTV_EC_AUTHENTICATION,
	TTV_EC_INVALID_AUTHTOKEN,
	TTV_EC_MEMORY,
	TTV_EC_ALIGN16_REQUIRED,
	TTV_EC_UNSUPPORTED_INPUT_FORMAT,
	TTV_EC_UNSUPPORTED_OUTPUT_FORMAT,
	TTV_EC_INVALID_RESOLUTION,
	TTV_EC_INVALID_FPS,
	TTV_EC_INVALID_BITRATE,
	TTV_EC_FAILED_TO_INIT_SPEAKER_CAPTURE,	
	TTV_EC_FRAME_QUEUE_FULL,
	TTV_EC_HTTPREQUEST_ERROR,
	TTV_EC_INVALID_CLIENTID,
	TTV_EC_INVALID_CHANNEL_NAME,	
	TTV_EC_API_REQUEST_FAILED,
	TTV_EC_API_REQUEST_TIMEDOUT,
	TTV_EC_INVALID_HTTP_REQUEST_PARAMS,	
	TTV_EC_COINITIALIZE_FAIED,
	TTV_EC_WEBAPI_RESULT_INVALID_JSON,
	TTV_EC_WEBAPI_RESULT_NO_AUTHTOKEN,
	TTV_EC_WEBAPI_RESULT_NO_STREAMKEY,
	TTV_EC_WEBAPI_RESULT_NO_CHANNELNAME,
	TTV_EC_WEBAPI_RESULT_NO_INGESTS,
	TTV_EC_WEBAPI_RESULT_NO_RECORDING_STATUS,
	TTV_EC_WEBAPI_RESULT_NO_STREAMINFO,
	TTV_EC_WEBAPI_RESULT_INVALID_VIEWERS,
	TTV_EC_WEBAPI_RESULT_NO_USERNAME,
	TTV_EC_WEBAPI_RESULT_NO_USER_DISPLAY_NAME,	
	TTV_EC_NO_STREAM_KEY,
	TTV_EC_NEED_TO_LOGIN,
	TTV_EC_INVALID_VIDEOFRAME,
	TTV_EC_INVALID_BUFFER,
	TTV_EC_INVALID_CALLBACK,
	TTV_EC_INVALID_JSON,
	TTV_EC_NO_SPSPPS,
	TTV_EC_NO_D3D_SUPPORT,
	TTV_EC_NO_INGEST_SERVER_AVAILABLE,
	TTV_EC_INVALID_INGEST_SERVER,
	TTV_EC_CANNOT_SUSPEND_THREADSYNC,
	TTV_EC_CANNOT_SIGNAL_THREADSYNC,
	TTV_EC_INVALID_ENCODER,
	TTV_EC_AUDIO_DEVICE_INIT_FAILED,
	TTV_EC_INVALID_SAMPLERATE,
	TTV_EC_X264_INVALID_PRESET,
	TTV_EC_X264_INVALID_PROFILE,

	TTV_EC_FLV_UNABLE_TO_OPEN_FILE,
	TTV_EC_FLV_FILE_NOT_OPEN,
	TTV_EC_FLV_UNSUPPORTED_AUDIO_RATE,
	TTV_EC_FLV_UNSUPPORTED_AUDIO_CODEC,

	TTV_EC_RTMP_WRONG_PROTOCOL_IN_URL,
	TTV_EC_RTMP_UNABLE_TO_SEND_DATA,
	TTV_EC_RTMP_INVALID_FLV_PACKET,
	TTV_EC_RTMP_TIMEOUT,
	
	// Mac audio capture
	TTV_EC_MAC_INPUT_Q_SETUP_FAILED,
	TTV_EC_MAC_INPUT_Q_BUFFER_SETUP_FAILED,
	TTV_EC_MAC_INPUT_Q_START_FAILED,
	

// intel encoder
	TTV_EC_INTEL_FAILED_SESSION_INIT,
	TTV_EC_INTEL_FAILED_VPP_INIT,
	TTV_EC_INTEL_FAILED_ENCODER_INIT,
	TTV_EC_INTEL_FAILED_SURFACE_ALLOCATION,
	TTV_EC_INTEL_FAILED_TASKPOLL_INIT,	
	TTV_EC_INTEL_NO_FREE_TASK,
	TTV_EC_INTEL_NO_FREE_SURFACE,
	
// apple encoder
	TTV_EC_APPLEENCODER_FAILED_START,
	TTV_EC_APPLEENCODER_FAILED_FRAME_SUBMISSION,

// lame mp3 encoder
	TTV_EC_LAMEMP3_FAILED_INIT,
	TTV_EC_LAMEMP3_FAILED_SHUTDOWN,
	
// apple aac encoder
	TTV_EC_APPLEAAC_FAILED_INIT,
	TTV_EC_APPLEAAC_FAILED_ENCODING,
	TTV_EC_APPLEAAC_FAILED_SHUTDOWN,

// TODO: map mac errors onto winsock errors
	TTV_EC_REQUEST_PENDING,
	TTV_EC_WSASTARTUP_FAILED,
	TTV_EC_WSACLEANUP_FAILED,
	TTV_EC_SOCKET_GETADDRINFO_FAILED,
	TTV_EC_SOCKET_CREATE_FAILED,
	TTV_EC_SOCKET_CONNECT_FAILED,
	TTV_EC_SOCKET_SEND_ERROR,
	TTV_EC_SOCKET_RECV_ERROR,
	TTV_EC_SOCKET_IOCTL_ERROR,

	TTV_EC_SOCKET_ERR = 1000,
	
	TTV_EC_SOCKET_EINTR = TTV_EC_SOCKET_ERR + 4,
	TTV_EC_SOCKET_EBADF = TTV_EC_SOCKET_ERR + 9,
	TTV_EC_SOCKET_EACCES = TTV_EC_SOCKET_ERR + 13,
	TTV_EC_SOCKET_EFAULT = TTV_EC_SOCKET_ERR + 14,
	TTV_EC_SOCKET_EINVAL = TTV_EC_SOCKET_ERR + 22,
	TTV_EC_SOCKET_EMFILE = TTV_EC_SOCKET_ERR + 24,
	TTV_EC_SOCKET_EWOULDBLOCK = TTV_EC_SOCKET_ERR + 35,
	TTV_EC_SOCKET_EINPROGRESS = TTV_EC_SOCKET_ERR + 36,
	TTV_EC_SOCKET_EALREADY = TTV_EC_SOCKET_ERR + 37,
	TTV_EC_SOCKET_ENOTSOCK = TTV_EC_SOCKET_ERR + 38,
	TTV_EC_SOCKET_EDESTADDRREQ = TTV_EC_SOCKET_ERR + 39,
	TTV_EC_SOCKET_EMSGSIZE = TTV_EC_SOCKET_ERR + 40,
	TTV_EC_SOCKET_EPROTOTYPE = TTV_EC_SOCKET_ERR + 41,
	TTV_EC_SOCKET_ENOPROTOOPT = TTV_EC_SOCKET_ERR + 42,
	TTV_EC_SOCKET_EPROTONOSUPPORT = TTV_EC_SOCKET_ERR + 43,
	TTV_EC_SOCKET_ESOCKTNOSUPPORT = TTV_EC_SOCKET_ERR + 44,
	TTV_EC_SOCKET_EOPNOTSUPP = TTV_EC_SOCKET_ERR + 45,
	TTV_EC_SOCKET_EPFNOSUPPORT = TTV_EC_SOCKET_ERR + 46,
	TTV_EC_SOCKET_EAFNOSUPPORT = TTV_EC_SOCKET_ERR + 47,
	TTV_EC_SOCKET_EADDRINUSE = TTV_EC_SOCKET_ERR + 48,
	TTV_EC_SOCKET_EADDRNOTAVAIL = TTV_EC_SOCKET_ERR + 49,
	TTV_EC_SOCKET_ENETDOWN = TTV_EC_SOCKET_ERR + 50,
	TTV_EC_SOCKET_ENETUNREACH = TTV_EC_SOCKET_ERR + 51,
	TTV_EC_SOCKET_ENETRESET = TTV_EC_SOCKET_ERR + 52,
	TTV_EC_SOCKET_ECONNABORTED = TTV_EC_SOCKET_ERR + 53,
	TTV_EC_SOCKET_ECONNRESET = TTV_EC_SOCKET_ERR + 54,
	TTV_EC_SOCKET_ENOBUFS = TTV_EC_SOCKET_ERR + 55,
	TTV_EC_SOCKET_EISCONN = TTV_EC_SOCKET_ERR + 56,
	TTV_EC_SOCKET_ENOTCONN = TTV_EC_SOCKET_ERR + 57,
	TTV_EC_SOCKET_ESHUTDOWN = TTV_EC_SOCKET_ERR + 58,
	TTV_EC_SOCKET_ETOOMANYREFS = TTV_EC_SOCKET_ERR + 59,
	TTV_EC_SOCKET_ETIMEDOUT = TTV_EC_SOCKET_ERR + 60,
	TTV_EC_SOCKET_ECONNREFUSED = TTV_EC_SOCKET_ERR + 61,
	TTV_EC_SOCKET_ELOOP = TTV_EC_SOCKET_ERR + 62,
	TTV_EC_SOCKET_ENAMETOOLONG = TTV_EC_SOCKET_ERR + 63,
	TTV_EC_SOCKET_EHOSTDOWN = TTV_EC_SOCKET_ERR + 64,
	TTV_EC_SOCKET_EHOSTUNREACH = TTV_EC_SOCKET_ERR + 65,
	TTV_EC_SOCKET_ENOTEMPTY = TTV_EC_SOCKET_ERR + 66,
	TTV_EC_SOCKET_EPROCLIM = TTV_EC_SOCKET_ERR + 67,
	TTV_EC_SOCKET_EUSERS = TTV_EC_SOCKET_ERR + 68,
	TTV_EC_SOCKET_EDQUOT = TTV_EC_SOCKET_ERR + 69,
	TTV_EC_SOCKET_ESTALE = TTV_EC_SOCKET_ERR + 70,
	TTV_EC_SOCKET_EREMOTE = TTV_EC_SOCKET_ERR + 71,
	TTV_EC_SOCKET_SYSNOTREADY = TTV_EC_SOCKET_ERR + 91,
	TTV_EC_SOCKET_VERNOTSUPPORTED = TTV_EC_SOCKET_ERR + 92,
	TTV_EC_SOCKET_NOTINITIALISED = TTV_EC_SOCKET_ERR + 93,
	TTV_EC_SOCKET_EDISCON = TTV_EC_SOCKET_ERR + 101,
	TTV_EC_SOCKET_ENOMORE = TTV_EC_SOCKET_ERR + 102,
	TTV_EC_SOCKET_ECANCELLED = TTV_EC_SOCKET_ERR + 103,
	TTV_EC_SOCKET_EINVALIDPROCTABLE = TTV_EC_SOCKET_ERR + 104,
	TTV_EC_SOCKET_EINVALIDPROVIDER = TTV_EC_SOCKET_ERR + 105,
	TTV_EC_SOCKET_EPROVIDERFAILEDINIT = TTV_EC_SOCKET_ERR + 106,
	TTV_EC_SOCKET_SYSCALLFAILURE = TTV_EC_SOCKET_ERR + 107,
	TTV_EC_SOCKET_SERVICE_NOT_FOUND = TTV_EC_SOCKET_ERR + 108,
	TTV_EC_SOCKET_TYPE_NOT_FOUND = TTV_EC_SOCKET_ERR + 109,
	TTV_EC_SOCKET_E_NO_MORE = TTV_EC_SOCKET_ERR + 110,
	TTV_EC_SOCKET_E_CANCELLED = TTV_EC_SOCKET_ERR + 111,
	TTV_EC_SOCKET_EREFUSED = TTV_EC_SOCKET_ERR + 112,
	TTV_EC_SOCKET_HOST_NOT_FOUND = TTV_EC_SOCKET_ERR + 1001,
	TTV_EC_SOCKET_TRY_AGAIN = TTV_EC_SOCKET_ERR + 1002,
	TTV_EC_SOCKET_NO_RECOVERY = TTV_EC_SOCKET_ERR + 1003,
	TTV_EC_SOCKET_NO_DATA = TTV_EC_SOCKET_ERR + 1004,
	TTV_EC_SOCKET_QOS_RECEIVERS = TTV_EC_SOCKET_ERR + 1005,
	TTV_EC_SOCKET_QOS_SENDERS = TTV_EC_SOCKET_ERR + 1006,
	TTV_EC_SOCKET_QOS_NO_SENDERS = TTV_EC_SOCKET_ERR + 1007,
	TTV_EC_SOCKET_QOS_NO_RECEIVERS = TTV_EC_SOCKET_ERR + 1008,
	TTV_EC_SOCKET_QOS_REQUEST_CONFIRMED = TTV_EC_SOCKET_ERR + 1009,
	TTV_EC_SOCKET_QOS_ADMISSION_FAILURE = TTV_EC_SOCKET_ERR + 1010,
	TTV_EC_SOCKET_QOS_POLICY_FAILURE = TTV_EC_SOCKET_ERR + 1011,
	TTV_EC_SOCKET_QOS_BAD_STYLE = TTV_EC_SOCKET_ERR + 1012,
	TTV_EC_SOCKET_QOS_BAD_OBJECT = TTV_EC_SOCKET_ERR + 1013,
	TTV_EC_SOCKET_QOS_TRAFFIC_CTRL_ERROR = TTV_EC_SOCKET_ERR + 1014,
	TTV_EC_SOCKET_QOS_GENERIC_ERROR = TTV_EC_SOCKET_ERR + 1015,
	TTV_EC_SOCKET_QOS_ESERVICETYPE = TTV_EC_SOCKET_ERR + 1016,
	TTV_EC_SOCKET_QOS_EFLOWSPEC = TTV_EC_SOCKET_ERR + 1017,
	TTV_EC_SOCKET_QOS_EPROVSPECBUF = TTV_EC_SOCKET_ERR + 1018,
	TTV_EC_SOCKET_QOS_EFILTERSTYLE = TTV_EC_SOCKET_ERR + 1019,
	TTV_EC_SOCKET_QOS_EFILTERTYPE = TTV_EC_SOCKET_ERR + 1020,
	TTV_EC_SOCKET_QOS_EFILTERCOUNT = TTV_EC_SOCKET_ERR + 1021,
	TTV_EC_SOCKET_QOS_EOBJLENGTH = TTV_EC_SOCKET_ERR + 1022,
	TTV_EC_SOCKET_QOS_EFLOWCOUNT = TTV_EC_SOCKET_ERR + 1023,
	TTV_EC_SOCKET_QOS_EUNKOWNPSOBJ = TTV_EC_SOCKET_ERR + 1024,
	TTV_EC_SOCKET_QOS_EPOLICYOBJ = TTV_EC_SOCKET_ERR + 1025,
	TTV_EC_SOCKET_QOS_EFLOWDESC = TTV_EC_SOCKET_ERR + 1026,
	TTV_EC_SOCKET_QOS_EPSFLOWSPEC = TTV_EC_SOCKET_ERR + 1027,
	TTV_EC_SOCKET_QOS_EPSFILTERSPEC = TTV_EC_SOCKET_ERR + 1028,
	TTV_EC_SOCKET_QOS_ESDMODEOBJ = TTV_EC_SOCKET_ERR + 1029,
	TTV_EC_SOCKET_QOS_ESHAPERATEOBJ = TTV_EC_SOCKET_ERR + 1030,
	TTV_EC_SOCKET_QOS_RESERVED_PETYPE = TTV_EC_SOCKET_ERR + 1031,
	TTV_EC_SOCKET_SECURE_HOST_NOT_FOUND = TTV_EC_SOCKET_ERR + 1032,
	TTV_EC_SOCKET_IPSEC_NAME_POLICY_ERROR = TTV_EC_SOCKET_ERR + 1033,

	TTV_EC_SOCKET_END,

// chat
	TTV_EC_CHAT_NOT_INITIALIZED,		//!< The chat subsystem has not been initialized properly.
	TTV_EC_CHAT_ALREADY_INITIALIZED,	//!< The chat subsystem has already been initialized.
	TTV_EC_CHAT_ALREADY_IN_CHANNEL,		//!< Already in the channel.
	TTV_EC_CHAT_INVALID_LOGIN,			//!< Invalid login credentials.
	TTV_EC_CHAT_INVALID_CHANNEL,		//!< The named channel doesn't exist.
	TTV_EC_CHAT_LOST_CONNECTION,		//!< Lost connection to the chat server.
	TTV_EC_CHAT_COULD_NOT_CONNECT,		//!< Could not connect to the chat server.
	TTV_EC_CHAT_NOT_IN_CHANNEL,			//!< Not in the named channel.
	TTV_EC_CHAT_INVALID_MESSAGE,		//!< Not a valid message.
	TTV_EC_CHAT_TOO_MANY_REQUESTS,		//!< The request queue is growing too large and the request has been ignored.
	TTV_EC_CHAT_LEAVING_CHANNEL,		//!< In the middle of leaving the channel.
	TTV_EC_CHAT_SHUTTING_DOWN,			//!< The chat system is in the middle of shutting down and cannot be used currently.
	TTV_EC_CHAT_ANON_DENIED,			//!< Attempted to perform an action that anonymous connections are not allowed to do.
	TTV_EC_CHAT_EMOTICON_DATA_NOT_READY,			//!< The emoticon data is not ready to use.
	TTV_EC_CHAT_EMOTICON_DATA_DOWNLOADING,			//!< The emoticon data is already downloading.
	TTV_EC_CHAT_EMOTICON_DATA_LOCKED,				//!< The emoticon data has been locked by the client by a call to TTV_Chat_GetEmoticonData which has not been freed by TTV_Chat_FreeEmoticonData.
	TTV_EC_CHAT_EMOTICON_DOWNLOAD_FAILED,			//!< There were too many download errors while trying to fetch the emoticon data.	TTV_EC_CHAT_ANON_DENIED			//!< Attempted to perform an action that anonymous connections are not allowed to do.


//webcam
	TTV_EC_WEBCAM_NO_PLATFORM_SUPPORT,
	TTV_EC_WEBCAM_COULD_NOT_COMPLETE,
	TTV_EC_WEBCAM_OUT_OF_MEMORY,
	TTV_EC_WEBCAM_UNKNOWN_ERROR,
	TTV_EC_WEBCAM_INVALID_PARAMETER,
	TTV_EC_WEBCAM_INVALID_CAPABILITY,
	TTV_EC_WEBCAM_BUFFER_NOT_BIG_ENOUGH,
	TTV_EC_WEBCAM_DEVICE_NOT_STARTED,
	TTV_EC_WEBCAM_DEVICE_ALREADY_STARTED,
	TTV_EC_WEBCAM_DEVICE_NOT_FOUND,
	TTV_EC_WEBCAM_FRAME_NOT_AVAILABLE,
	TTV_EC_WEBCAM_NOT_INITIALIZED,
	TTV_EC_WEBCAM_FAILED_TO_START,
	TTV_EC_WEBCAM_LEFT_IN_UNSAFE_STATE,
	TTV_EC_WEBCAM_UNSUPPORTED_SOURCE_FORMAT,
	TTV_EC_WEBCAM_UNSUPPORTED_TARGET_FORMAT,


	TTV_EC_INVALID_STRUCT_SIZE, //!< The size field of the struct does not have the expected value.  Some fields may have been added to the struct and you may have set them and recompile your code.
	TTV_EC_STREAM_ALREADY_STARTED,	//!< The requested operation can't be serviced because the broadcast has already been started.
	TTV_EC_STREAM_NOT_STARTED,	//!< The requested operation can't be serviced because the broadcast not been started.	
	TTV_EC_REQUEST_ABORTED, //!< The request was aborted and did not finish.
	TTV_EC_FRAME_QUEUE_TOO_LONG //!< The network is backing up because video settings are too high for the internet connection.  Stop the stream and restart with lower settings.

} TTV_ErrorCode;


#define TTV_FAILED(err) ( (err) > TTV_EC_SUCCESS )
#define TTV_SUCCEEDED(err) ( (err) <= TTV_EC_SUCCESS)
#define TTV_RETURN_ON_NULL(ptr,err) { if ( (ptr) == nullptr) return err; }
#define ASSERT_ON_ERROR(err) {assert ( (err) <= TTV_EC_SUCCESS ); }

#define TTV_TO_WSA_ERROR(ttv_ec) (int)(ttv_ec-TTV_EC_SOCKET_ERR+WSABASEERR)
#define WSA_TO_TTV_ERROR(wsa_ec) (TTV_ErrorCode) (wsa_ec-WSABASEERR+TTV_EC_SOCKET_ERR)