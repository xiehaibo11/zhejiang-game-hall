.class public Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;
.super Ljava/lang/Object;
.source "VivoDeviceIDHelper.java"


# instance fields
.field private handler:Landroid/os/Handler;

.field private handlerThread:Landroid/os/HandlerThread;

.field private isSupportIds:Z

.field private mConetxt:Landroid/content/Context;

.field oaid:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 29
    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->isSupportIds:Z

    const/4 v0, 0x0

    .line 30
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->oaid:Ljava/lang/String;

    .line 24
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->mConetxt:Landroid/content/Context;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;ILjava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 19
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->getContentResolver(ILjava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private f()V
    .locals 2

    .line 99
    new-instance v0, Landroid/os/HandlerThread;

    const-string v1, "SqlWorkThread"

    invoke-direct {v0, v1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->handlerThread:Landroid/os/HandlerThread;

    .line 100
    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    .line 101
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper$1;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->handlerThread:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper$1;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->handler:Landroid/os/Handler;

    return-void
.end method

.method private getContentResolver(ILjava/lang/String;)Ljava/lang/String;
    .locals 7

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    const/4 v1, 0x1

    if-eq p1, v1, :cond_1

    const/4 v1, 0x2

    if-eq p1, v1, :cond_0

    move-object v2, v0

    goto :goto_1

    .line 129
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "content://com.vivo.vms.IdProvider/IdentifierId/AAID_"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    goto :goto_0

    .line 126
    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "content://com.vivo.vms.IdProvider/IdentifierId/VAID_"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    goto :goto_0

    :cond_2
    const-string p1, "content://com.vivo.vms.IdProvider/IdentifierId/OAID"

    .line 123
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    :goto_0
    move-object v2, p1

    .line 135
    :goto_1
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->mConetxt:Landroid/content/Context;

    invoke-virtual {p1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v1

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    invoke-virtual/range {v1 .. v6}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 137
    invoke-interface {p1}, Landroid/database/Cursor;->moveToNext()Z

    move-result p2

    if-eqz p2, :cond_3

    const-string p2, "value"

    .line 138
    invoke-interface {p1, p2}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result p2

    invoke-interface {p1, p2}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object p2

    move-object v0, p2

    .line 140
    :cond_3
    invoke-interface {p1}, Landroid/database/Cursor;->close()V

    goto :goto_2

    :cond_4
    const-string p1, "Wooo"

    const-string p2, "VivoDeviceIDHelper getContentResolver is faile."

    .line 143
    invoke-static {p1, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :goto_2
    return-object v0
.end method

.method private isSupportIds()Z
    .locals 3

    const-string v0, "persist.sys.identifierid.supported"

    const-string v1, "0"

    .line 92
    invoke-direct {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->sysProperty(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 93
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "VIVO_OpenDeviceIDs isSupportIds issup -> "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Wooo"

    invoke-static {v2, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const-string v1, "1"

    .line 94
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->isSupportIds:Z

    return v0
.end method

.method private sysProperty(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    :try_start_0
    const-string v0, "android.os.SystemProperties"

    .line 80
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "get"

    const/4 v2, 0x2

    new-array v3, v2, [Ljava/lang/Class;

    .line 81
    const-class v4, Ljava/lang/String;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    const-class v4, Ljava/lang/String;

    const/4 v6, 0x1

    aput-object v4, v3, v6

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-array v2, v2, [Ljava/lang/Object;

    aput-object p1, v2, v5

    const-string p1, "unknown"

    aput-object p1, v2, v6

    .line 82
    invoke-virtual {v1, v0, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 85
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-object p2
.end method

.method private timeCheck(ILjava/lang/String;)V
    .locals 4

    .line 66
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->handler:Landroid/os/Handler;

    invoke-virtual {v0}, Landroid/os/Handler;->obtainMessage()Landroid/os/Message;

    move-result-object v0

    const/16 v1, 0xb

    .line 67
    iput v1, v0, Landroid/os/Message;->what:I

    .line 68
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    const-string v2, "type"

    const/4 v3, 0x0

    .line 69
    invoke-virtual {v1, v2, v3}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const/4 v2, 0x1

    if-eq p1, v2, :cond_0

    const/4 v2, 0x2

    if-ne p1, v2, :cond_1

    :cond_0
    const-string p1, "appid"

    .line 71
    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 73
    :cond_1
    invoke-virtual {v0, v1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 74
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->handler:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method


# virtual methods
.method public getOaid()Ljava/lang/String;
    .locals 7

    const-string v0, "content://com.vivo.vms.IdProvider/IdentifierId/OAID"

    .line 34
    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    .line 35
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->mConetxt:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v1

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    invoke-virtual/range {v1 .. v6}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 37
    invoke-interface {v0}, Landroid/database/Cursor;->moveToNext()Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v1, "value"

    .line 38
    invoke-interface {v0, v1}, Landroid/database/Cursor;->getColumnIndex(Ljava/lang/String;)I

    move-result v1

    invoke-interface {v0, v1}, Landroid/database/Cursor;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 40
    :cond_0
    invoke-interface {v0}, Landroid/database/Cursor;->close()V

    goto :goto_0

    :cond_1
    const-string v0, "Wooo"

    const-string v2, "VivoDeviceIDHelper getContentResolver is faile."

    .line 43
    invoke-static {v0, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-object v1
.end method

.method public loge()Ljava/lang/String;
    .locals 2

    .line 51
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->f()V

    .line 52
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->isSupportIds()Z

    .line 54
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->isSupportIds:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 57
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->oaid:Ljava/lang/String;

    if-eqz v0, :cond_1

    return-object v1

    :cond_1
    const/4 v0, 0x0

    .line 60
    invoke-direct {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->timeCheck(ILjava/lang/String;)V

    return-object v1
.end method
