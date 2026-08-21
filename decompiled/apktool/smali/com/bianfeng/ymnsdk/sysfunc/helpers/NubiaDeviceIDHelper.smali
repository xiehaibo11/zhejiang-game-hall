.class public Lcom/bianfeng/ymnsdk/sysfunc/helpers/NubiaDeviceIDHelper;
.super Ljava/lang/Object;
.source "NubiaDeviceIDHelper.java"


# instance fields
.field private mConetxt:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/NubiaDeviceIDHelper;->mConetxt:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public getNubiaID()Ljava/lang/String;
    .locals 5

    const-string v0, "content://cn.nubia.identity/identity"

    .line 27
    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    const/4 v1, 0x0

    .line 29
    :try_start_0
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/16 v3, 0x11

    const-string v4, "getOAID"

    if-le v2, v3, :cond_1

    .line 30
    :try_start_1
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/NubiaDeviceIDHelper;->mConetxt:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    invoke-virtual {v2, v0}, Landroid/content/ContentResolver;->acquireContentProviderClient(Landroid/net/Uri;)Landroid/content/ContentProviderClient;

    move-result-object v0

    .line 31
    invoke-virtual {v0, v4, v1, v1}, Landroid/content/ContentProviderClient;->call(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;

    move-result-object v2

    if-eqz v0, :cond_2

    .line 33
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x18

    if-lt v3, v4, :cond_0

    .line 34
    invoke-virtual {v0}, Landroid/content/ContentProviderClient;->close()V

    goto :goto_0

    .line 37
    :cond_0
    invoke-virtual {v0}, Landroid/content/ContentProviderClient;->release()Z

    goto :goto_0

    .line 42
    :cond_1
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/NubiaDeviceIDHelper;->mConetxt:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    invoke-virtual {v2, v0, v4, v1, v1}, Landroid/content/ContentResolver;->call(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;

    move-result-object v2

    :cond_2
    :goto_0
    const-string v0, "code"

    const/4 v3, -0x1

    .line 44
    invoke-virtual {v2, v0, v3}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "id"

    .line 46
    invoke-virtual {v2, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_3
    const-string v0, "message"

    .line 49
    invoke-virtual {v2, v0}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object v1

    :catch_0
    move-exception v0

    .line 53
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-object v1
.end method
