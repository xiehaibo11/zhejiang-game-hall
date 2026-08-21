.class public interface abstract Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;
.super Ljava/lang/Object;
.source "IUserFeature.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    }
.end annotation


# static fields
.field public static final ACTIVITY_YMN_REALNAME_ADULT:I = 0x3b99436d

.field public static final ACTIVITY_YMN_REALNAME_CHILD:I = 0x3b99436e

.field public static final ACTIVITY_YMN_REALNAME_FAILED:I = 0x3b994370

.field public static final ACTIVITY_YMN_REALNAME_NONSUPPORT_QUERY:I = 0x3b994371

.field public static final ACTIVITY_YMN_REALNAME_NONSUPPORT_SHOW:I = 0x3b994372

.field public static final ACTIVITY_YMN_REALNAME_NO_VERIFIED:I = 0x3b99436f

.field public static final ACTIVITY_YMN_SET_REALNAME_FAIL:I = 0x3b99436c

.field public static final ACTIVITY_YMN_SET_REALNAME_SUCCESS:I = 0x3b99436b

.field public static final FUNCTION_ACCOUNT_SWITCH:Ljava/lang/String; = "accountSwitch"

.field public static final FUNCTION_ENTER_PLATFORM:Ljava/lang/String; = "enterPlatform"

.field public static final FUNCTION_EXIT:Ljava/lang/String; = "exit"

.field public static final FUNCTION_GET_SHOW_VERIFY_REALNAME:Ljava/lang/String; = "get_show_verify_realname"

.field public static final FUNCTION_GET_USER_INFO:Ljava/lang/String; = "getUserInfo"

.field public static final FUNCTION_GET_VERIFY_REALNAME:Ljava/lang/String; = "get_verify_realname_info"

.field public static final FUNCTION_HIDE_TOOLBAR:Ljava/lang/String; = "hideToolBar"

.field public static final FUNCTION_IS_LOGINED:Ljava/lang/String; = "isLogined"

.field public static final FUNCTION_LOGOUT:Ljava/lang/String; = "logout"

.field public static final FUNCTION_SHOW_TOOLBAR:Ljava/lang/String; = "showToolBar"

.field public static final FUNCTION_SHOW_VERIFY_REALNAME:Ljava/lang/String; = "show_verify_realname"

.field public static final FUNCTION_SUBMIT_USERINFO:Ljava/lang/String; = "submitUserInfo"

.field public static final LOGIN_SUC_RS_EXT:Ljava/lang/String; = "ext"

.field public static final LOGIN_SUC_RS_NICKNAME:Ljava/lang/String; = "nickName"

.field public static final LOGIN_SUC_RS_SESSION:Ljava/lang/String; = "session"

.field public static final LOGIN_SUC_RS_UID:Ljava/lang/String; = "uid"

.field public static final LOGIN_SUC_RS_UNAME:Ljava/lang/String; = "uname"


# virtual methods
.method public abstract enterPlatform()V
.end method

.method public abstract exit()V
.end method

.method public abstract getAndShowVerifyRealName()V
.end method

.method public abstract getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
.end method

.method public abstract getVerifyRealNameInfo()V
.end method

.method public abstract hideToolBar()V
.end method

.method public abstract isLogined()Z
.end method

.method public abstract login()V
.end method

.method public abstract logout()V
.end method

.method public abstract showToolBar()V
.end method

.method public abstract showVerifyRealName()V
.end method

.method public abstract submitUserInfo(Ljava/util/LinkedHashMap;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract switchAccount()V
.end method
