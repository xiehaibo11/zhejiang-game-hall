.class public Lcom/bytedance/pangle/log/ZeusLogger;
.super Ljava/lang/Object;


# static fields
.field public static final TAG:Ljava/lang/String; = "Zeus_pangle"

.field public static final TAG_ACTIVITY:Ljava/lang/String; = "Zeus/activity_pangle"

.field public static final TAG_DOWNLOAD:Ljava/lang/String; = "Zeus/download_pangle"

.field public static final TAG_INIT:Ljava/lang/String; = "Zeus/init_pangle"

.field public static final TAG_INSTALL:Ljava/lang/String; = "Zeus/install_pangle"

.field public static final TAG_LOAD:Ljava/lang/String; = "Zeus/load_pangle"

.field public static final TAG_PAM:Ljava/lang/String; = "Zeus/pam_pangle"

.field public static final TAG_PPM:Ljava/lang/String; = "Zeus/ppm_pangle"

.field public static final TAG_PROVIDER:Ljava/lang/String; = "Zeus/provider_pangle"

.field public static final TAG_RECEIVER:Ljava/lang/String; = "Zeus/receiver_pangle"

.field public static final TAG_REPORTER:Ljava/lang/String; = "Zeus/reporter_pangle"

.field public static final TAG_RESOURCES:Ljava/lang/String; = "Zeus/resources_pangle"

.field public static final TAG_SERVER:Ljava/lang/String; = "Zeus/server_pangle"

.field public static final TAG_SERVICE:Ljava/lang/String; = "Zeus/service_pangle"

.field public static final TAG_SO:Ljava/lang/String; = "Zeus/so_pangle"

.field private static sDebug:Z = true

.field private static sEnableTrace:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static d(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 102
    invoke-static {v0, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static d(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 112
    invoke-static {p0, p1}, Lcom/bytedance/pangle/log/ZeusLogger;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static errReport(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 176
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0}, Ljava/lang/RuntimeException;-><init>()V

    .line 177
    invoke-virtual {v0}, Ljava/lang/RuntimeException;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v1

    .line 178
    array-length v2, v1

    const/4 v3, 0x1

    sub-int/2addr v2, v3

    invoke-static {v1, v3, v2}, Ljava/util/Arrays;->copyOfRange([Ljava/lang/Object;II)[Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/StackTraceElement;

    .line 179
    invoke-virtual {v0, v1}, Ljava/lang/RuntimeException;->setStackTrace([Ljava/lang/StackTraceElement;)V

    const/4 v1, 0x0

    .line 180
    invoke-static {p0, p1, v0, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Z)V

    return-void
.end method

.method public static errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    const/4 v0, 0x1

    .line 189
    invoke-static {p0, p1, p2, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Z)V

    return-void
.end method

.method private static errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Z)V
    .locals 2

    .line 193
    sget-boolean v0, Lcom/bytedance/pangle/log/ZeusLogger;->sDebug:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    if-eqz p3, :cond_0

    move-object v1, p2

    .line 194
    :cond_0
    invoke-static {p0, p1, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    goto :goto_0

    .line 196
    :cond_1
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->getLogger()Lcom/bytedance/pangle/log/IZeusLogger;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 197
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->getLogger()Lcom/bytedance/pangle/log/IZeusLogger;

    move-result-object v0

    if-eqz p3, :cond_2

    move-object v1, p2

    :cond_2
    invoke-interface {v0, p0, p1, v1}, Lcom/bytedance/pangle/log/IZeusLogger;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 200
    :cond_3
    :goto_0
    invoke-static {}, Lcom/bytedance/pangle/apm/ApmUtils;->getApmInstance()Lcom/bytedance/pangle/apm/AbsApm;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Lcom/bytedance/pangle/apm/AbsApm;->reportError(Ljava/lang/String;Ljava/lang/Throwable;)V

    return-void
.end method

.method private static getTraceInfo()Ljava/lang/String;
    .locals 6

    const-string v0, "\t\t[No Trace Info]"

    .line 224
    :try_start_0
    new-instance v1, Ljava/lang/Throwable;

    invoke-direct {v1}, Ljava/lang/Throwable;-><init>()V

    invoke-virtual {v1}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    .line 227
    :goto_0
    array-length v4, v1

    if-ge v3, v4, :cond_1

    .line 228
    aget-object v4, v1, v3

    invoke-virtual {v4}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v4

    .line 229
    const-class v5, Lcom/bytedance/pangle/log/ZeusLogger;

    invoke-virtual {v5}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 230
    aget-object v2, v1, v3

    goto :goto_1

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    if-eqz v2, :cond_2

    .line 235
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "\t\t["

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/lang/StackTraceElement;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "]"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v1

    .line 238
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_2
    return-object v0
.end method

.method public static i(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 116
    invoke-static {v0, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static i(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 126
    invoke-static {p1}, Lcom/bytedance/pangle/log/ZeusLogger;->prefixTraceInfo(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 127
    sget-boolean v0, Lcom/bytedance/pangle/log/ZeusLogger;->sDebug:Z

    if-eqz v0, :cond_0

    .line 128
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 130
    :cond_0
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->getLogger()Lcom/bytedance/pangle/log/IZeusLogger;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 131
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->getLogger()Lcom/bytedance/pangle/log/IZeusLogger;

    move-result-object v0

    invoke-interface {v0, p0, p1}, Lcom/bytedance/pangle/log/IZeusLogger;->i(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public static isDebug()Z
    .locals 1

    .line 59
    sget-boolean v0, Lcom/bytedance/pangle/log/ZeusLogger;->sDebug:Z

    return v0
.end method

.method public static isEnableTrace()Z
    .locals 1

    .line 77
    sget-boolean v0, Lcom/bytedance/pangle/log/ZeusLogger;->sEnableTrace:Z

    return v0
.end method

.method private static prefixTraceInfo(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 210
    sget-boolean v0, Lcom/bytedance/pangle/log/ZeusLogger;->sEnableTrace:Z

    if-eqz v0, :cond_0

    .line 211
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bytedance/pangle/log/ZeusLogger;->getTraceInfo()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :cond_0
    return-object p0
.end method

.method public static setDebug(Z)V
    .locals 0

    .line 50
    sput-boolean p0, Lcom/bytedance/pangle/log/ZeusLogger;->sDebug:Z

    return-void
.end method

.method public static setEnableTrace(Z)V
    .locals 0

    .line 68
    sput-boolean p0, Lcom/bytedance/pangle/log/ZeusLogger;->sEnableTrace:Z

    return-void
.end method

.method public static v(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 81
    invoke-static {v0, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->v(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static v(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 91
    invoke-static {p1}, Lcom/bytedance/pangle/log/ZeusLogger;->prefixTraceInfo(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 92
    sget-boolean v0, Lcom/bytedance/pangle/log/ZeusLogger;->sDebug:Z

    if-eqz v0, :cond_0

    .line 93
    invoke-static {p0, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 95
    :cond_0
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->getLogger()Lcom/bytedance/pangle/log/IZeusLogger;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 96
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->getLogger()Lcom/bytedance/pangle/log/IZeusLogger;

    move-result-object v0

    invoke-interface {v0, p0, p1}, Lcom/bytedance/pangle/log/IZeusLogger;->v(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public static w(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 137
    invoke-static {v0, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static w(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 147
    invoke-static {p1}, Lcom/bytedance/pangle/log/ZeusLogger;->prefixTraceInfo(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 148
    sget-boolean v0, Lcom/bytedance/pangle/log/ZeusLogger;->sDebug:Z

    if-eqz v0, :cond_0

    .line 149
    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 151
    :cond_0
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->getLogger()Lcom/bytedance/pangle/log/IZeusLogger;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 152
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->getLogger()Lcom/bytedance/pangle/log/IZeusLogger;

    move-result-object v0

    invoke-interface {v0, p0, p1}, Lcom/bytedance/pangle/log/IZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public static w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    .line 165
    invoke-static {p1}, Lcom/bytedance/pangle/log/ZeusLogger;->prefixTraceInfo(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 166
    sget-boolean v0, Lcom/bytedance/pangle/log/ZeusLogger;->sDebug:Z

    if-eqz v0, :cond_0

    .line 167
    invoke-static {p0, p1, p2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return-void

    .line 169
    :cond_0
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->getLogger()Lcom/bytedance/pangle/log/IZeusLogger;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 170
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->getLogger()Lcom/bytedance/pangle/log/IZeusLogger;

    move-result-object v0

    invoke-interface {v0, p0, p1, p2}, Lcom/bytedance/pangle/log/IZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    return-void
.end method
