.class public final Lcom/tkay/china/a/a/f;
.super Ljava/lang/Object;


# instance fields
.field private a:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 21
    iput-object p1, p0, Lcom/tkay/china/a/a/f;->a:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 6

    const-string v0, ""

    :try_start_0
    const-string v1, "content://cn.nubia.identity/identity"

    .line 28
    invoke-static {v1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    .line 30
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v3, 0x11

    const-string v4, "getOAID"

    const/4 v5, 0x0

    if-le v2, v3, :cond_1

    .line 31
    :try_start_1
    iget-object v2, p0, Lcom/tkay/china/a/a/f;->a:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/content/ContentResolver;->acquireContentProviderClient(Landroid/net/Uri;)Landroid/content/ContentProviderClient;

    move-result-object v1

    .line 32
    move-object v2, v5

    check-cast v2, Ljava/lang/String;

    check-cast v5, Landroid/os/Bundle;

    invoke-virtual {v1, v4, v2, v5}, Landroid/content/ContentProviderClient;->call(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;

    move-result-object v2

    if-eqz v1, :cond_2

    .line 34
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x18

    if-lt v3, v4, :cond_0

    .line 35
    invoke-virtual {v1}, Landroid/content/ContentProviderClient;->close()V

    goto :goto_0

    .line 37
    :cond_0
    invoke-virtual {v1}, Landroid/content/ContentProviderClient;->release()Z

    goto :goto_0

    .line 41
    :cond_1
    iget-object v2, p0, Lcom/tkay/china/a/a/f;->a:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    move-object v3, v5

    check-cast v3, Ljava/lang/String;

    check-cast v5, Landroid/os/Bundle;

    invoke-virtual {v2, v1, v4, v3, v5}, Landroid/content/ContentResolver;->call(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;

    move-result-object v2

    :cond_2
    :goto_0
    const/4 v1, -0x1

    if-eqz v2, :cond_3

    const-string v3, "code"

    .line 46
    invoke-virtual {v2, v3, v1}, Landroid/os/Bundle;->getInt(Ljava/lang/String;I)I

    move-result v1

    :cond_3
    if-nez v1, :cond_4

    const-string v1, "id"

    .line 50
    invoke-virtual {v2, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_4
    return-object v0

    :catchall_0
    move-exception v1

    .line 58
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_1

    :catch_0
    move-exception v1

    .line 56
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-object v0
.end method
