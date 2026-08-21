.class public final Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;
.super Lcom/kwad/sdk/crash/model/message/ExceptionMessage;


# static fields
.field private static final serialVersionUID:J = -0x6c1e25fea448ee16L


# instance fields
.field public mAbortMsg:Ljava/lang/String;

.field public mCode:Ljava/lang/String;

.field public mFaultAddr:Ljava/lang/String;

.field public mFingerprint:Ljava/lang/String;

.field public mManuallyKill:Ljava/lang/String;

.field public mRegister:Ljava/lang/String;

.field public mRevision:Ljava/lang/String;

.field public mSignal:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;-><init>()V

    const-string v0, "Unknown"

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mFingerprint:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mRevision:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mRegister:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mSignal:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mCode:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mManuallyKill:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mFaultAddr:Ljava/lang/String;

    const-string v0, ""

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mAbortMsg:Ljava/lang/String;

    const/4 v0, 0x4

    iput v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mExceptionType:I

    return-void
.end method


# virtual methods
.method protected final getTypePrefix()Ljava/lang/String;
    .locals 1

    const-string v0, "NATIVE_"

    return-object v0
.end method

.method public final parseJson(Lorg/json/JSONObject;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->parseJson(Lorg/json/JSONObject;)V

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "mFingerprint"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mFingerprint:Ljava/lang/String;

    const-string v0, "mRevision"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mRevision:Ljava/lang/String;

    const-string v0, "mRegister"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mRegister:Ljava/lang/String;

    const-string v0, "mSignal"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mSignal:Ljava/lang/String;

    const-string v0, "mCode"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mCode:Ljava/lang/String;

    const-string v0, "mManuallyKill"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mManuallyKill:Ljava/lang/String;

    const-string v0, "mFaultAddr"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mFaultAddr:Ljava/lang/String;

    const-string v0, "mAbortMsg"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mAbortMsg:Ljava/lang/String;

    return-void
.end method

.method public final toJson()Lorg/json/JSONObject;
    .locals 3

    invoke-super {p0}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mFingerprint:Ljava/lang/String;

    const-string v2, "mFingerprint"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mRevision:Ljava/lang/String;

    const-string v2, "mRevision"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mRegister:Ljava/lang/String;

    const-string v2, "mRegister"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mSignal:Ljava/lang/String;

    const-string v2, "mSignal"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mCode:Ljava/lang/String;

    const-string v2, "mCode"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mManuallyKill:Ljava/lang/String;

    const-string v2, "mManuallyKill"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mFaultAddr:Ljava/lang/String;

    const-string v2, "mFaultAddr"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mAbortMsg:Ljava/lang/String;

    const-string v2, "mAbortMsg"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method
