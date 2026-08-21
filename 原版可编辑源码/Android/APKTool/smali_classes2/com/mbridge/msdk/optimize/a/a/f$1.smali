.class final Lcom/mbridge/msdk/optimize/a/a/f$1;
.super Ljava/lang/Object;
.source "OppoDeviceHelper.java"

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/optimize/a/a/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/optimize/a/a/f;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/optimize/a/a/f;)V
    .locals 0

    .line 104
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/f$1;->a:Lcom/mbridge/msdk/optimize/a/a/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    .line 108
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/f$1;->a:Lcom/mbridge/msdk/optimize/a/a/f;

    invoke-static {p2}, Lcom/mbridge/msdk/optimize/a/b/d$a;->a(Landroid/os/IBinder;)Lcom/mbridge/msdk/optimize/a/b/d;

    move-result-object p2

    iput-object p2, p1, Lcom/mbridge/msdk/optimize/a/a/f;->b:Lcom/mbridge/msdk/optimize/a/b/d;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 110
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public final onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    .line 116
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/f$1;->a:Lcom/mbridge/msdk/optimize/a/a/f;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/mbridge/msdk/optimize/a/a/f;->b:Lcom/mbridge/msdk/optimize/a/b/d;

    return-void
.end method
