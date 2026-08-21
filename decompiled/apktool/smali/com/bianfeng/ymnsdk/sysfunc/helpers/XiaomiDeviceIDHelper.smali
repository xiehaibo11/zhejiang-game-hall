.class public Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;
.super Ljava/lang/Object;
.source "XiaomiDeviceIDHelper.java"


# instance fields
.field private aaid:Ljava/lang/reflect/Method;

.field private idImpl:Ljava/lang/Object;

.field private idProvider:Ljava/lang/Class;

.field private mContext:Landroid/content/Context;

.field private oaid:Ljava/lang/reflect/Method;

.field private udid:Ljava/lang/reflect/Method;

.field private vaid:Ljava/lang/reflect/Method;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 5

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->mContext:Landroid/content/Context;

    :try_start_0
    const-string p1, "com.android.id.impl.IdProviderImpl"

    .line 27
    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->idProvider:Ljava/lang/Class;

    .line 28
    invoke-virtual {p1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->idImpl:Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 31
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    const/4 p1, 0x0

    const/4 v0, 0x1

    .line 35
    :try_start_1
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->idProvider:Ljava/lang/Class;

    const-string v2, "getDefaultUDID"

    new-array v3, v0, [Ljava/lang/Class;

    const-class v4, Landroid/content/Context;

    aput-object v4, v3, p1

    invoke-virtual {v1, v2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->udid:Ljava/lang/reflect/Method;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v1

    .line 38
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 41
    :goto_1
    :try_start_2
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->idProvider:Ljava/lang/Class;

    const-string v2, "getOAID"

    new-array v3, v0, [Ljava/lang/Class;

    const-class v4, Landroid/content/Context;

    aput-object v4, v3, p1

    invoke-virtual {v1, v2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->oaid:Ljava/lang/reflect/Method;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_2

    :catch_2
    move-exception v1

    .line 44
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 47
    :goto_2
    :try_start_3
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->idProvider:Ljava/lang/Class;

    const-string v2, "getVAID"

    new-array v3, v0, [Ljava/lang/Class;

    const-class v4, Landroid/content/Context;

    aput-object v4, v3, p1

    invoke-virtual {v1, v2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->vaid:Ljava/lang/reflect/Method;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_3

    :catch_3
    move-exception v1

    .line 50
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 53
    :goto_3
    :try_start_4
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->idProvider:Ljava/lang/Class;

    const-string v2, "getAAID"

    new-array v0, v0, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    aput-object v3, v0, p1

    invoke-virtual {v1, v2, v0}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->aaid:Ljava/lang/reflect/Method;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_4

    goto :goto_4

    :catch_4
    move-exception p1

    .line 56
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_4
    return-void
.end method

.method private invokeMethod(Landroid/content/Context;Ljava/lang/reflect/Method;)Ljava/lang/String;
    .locals 3

    .line 62
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->idImpl:Ljava/lang/Object;

    if-eqz v0, :cond_0

    if-eqz p2, :cond_0

    const/4 v1, 0x1

    :try_start_0
    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    .line 64
    invoke-virtual {p2, v0, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 67
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method


# virtual methods
.method public getAAID()Ljava/lang/String;
    .locals 2

    .line 82
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->aaid:Ljava/lang/reflect/Method;

    invoke-direct {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->invokeMethod(Landroid/content/Context;Ljava/lang/reflect/Method;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getOAID()Ljava/lang/String;
    .locals 2

    .line 78
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->oaid:Ljava/lang/reflect/Method;

    invoke-direct {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->invokeMethod(Landroid/content/Context;Ljava/lang/reflect/Method;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getUDID()Ljava/lang/String;
    .locals 2

    .line 74
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->udid:Ljava/lang/reflect/Method;

    invoke-direct {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->invokeMethod(Landroid/content/Context;Ljava/lang/reflect/Method;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getVAID()Ljava/lang/String;
    .locals 2

    .line 86
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->vaid:Ljava/lang/reflect/Method;

    invoke-direct {p0, v0, v1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/XiaomiDeviceIDHelper;->invokeMethod(Landroid/content/Context;Ljava/lang/reflect/Method;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
