.class Lcom/czhj/sdk/common/network/Networking$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/sdk/common/network/Networking;->d(Landroid/content/Context;)Ljava/lang/String;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/network/Networking$3;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    :try_start_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v1, 0x11

    const-string v2, "user-agent-cache"

    if-lt v0, v1, :cond_0

    :try_start_1
    iget-object v0, p0, Lcom/czhj/sdk/common/network/Networking$3;->a:Landroid/content/Context;

    invoke-static {v0}, Landroid/webkit/WebSettings;->getDefaultUserAgent(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/network/Networking;->a(Ljava/lang/String;)Ljava/lang/String;

    iget-object v0, p0, Lcom/czhj/sdk/common/network/Networking$3;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/SharedPreferencesUtil;->getSharedPreferences(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->a()Ljava/lang/String;

    move-result-object v1

    :goto_0
    invoke-interface {v0, v2, v1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    goto :goto_1

    :cond_0
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_1

    new-instance v0, Landroid/webkit/WebView;

    iget-object v1, p0, Lcom/czhj/sdk/common/network/Networking$3;->a:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebSettings;->getUserAgentString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/network/Networking;->a(Ljava/lang/String;)Ljava/lang/String;

    iget-object v0, p0, Lcom/czhj/sdk/common/network/Networking$3;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/SharedPreferencesUtil;->getSharedPreferences(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->a()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_1
    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->b()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/network/Networking;->a(Ljava/lang/String;)Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->b()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/network/Networking;->a(Ljava/lang/String;)Ljava/lang/String;

    :goto_1
    return-void
.end method
