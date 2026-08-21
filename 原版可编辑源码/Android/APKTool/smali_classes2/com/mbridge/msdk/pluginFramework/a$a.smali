.class public final Lcom/mbridge/msdk/pluginFramework/a$a;
.super Ljava/lang/Object;
.source "PluginServiceAgent.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/pluginFramework/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field a:Lcom/mbridge/msdk/mbdownload/c;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/mbdownload/c;)V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 21
    iput-object p1, p0, Lcom/mbridge/msdk/pluginFramework/a$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Intent;II)I
    .locals 1

    .line 38
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/pluginFramework/a$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-virtual {v0, p1, p2, p3}, Lcom/mbridge/msdk/mbdownload/c;->a(Landroid/content/Intent;II)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    const-string p2, "PluginServiceContext"

    const-string p3, "invoke onStartCommand error"

    .line 40
    invoke-static {p2, p3, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const/4 p1, 0x0

    return p1
.end method

.method public final a(Landroid/content/Intent;)Landroid/os/IBinder;
    .locals 2

    .line 26
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/pluginFramework/a$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbdownload/c;->a(Landroid/content/Intent;)Landroid/os/IBinder;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    const-string v0, "PluginServiceContext"

    const-string v1, "invoke onBind error"

    .line 29
    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method public final a()V
    .locals 3

    .line 49
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/pluginFramework/a$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/c;->a()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    const-string v1, "PluginServiceContext"

    const-string v2, "invoke onCreate error"

    .line 51
    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public final b()V
    .locals 3

    .line 59
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/pluginFramework/a$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/c;->b()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    const-string v1, "PluginServiceContext"

    const-string v2, "invoke onDestroy error"

    .line 61
    invoke-static {v1, v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method
