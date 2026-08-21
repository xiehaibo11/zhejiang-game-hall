.class final Lcom/mbridge/msdk/optimize/a/a/e$1;
.super Ljava/lang/Object;
.source "OnePlusDeviceHelper.java"

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/optimize/a/a/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/optimize/a/a/e;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/optimize/a/a/e;)V
    .locals 0

    .line 106
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/e$1;->a:Lcom/mbridge/msdk/optimize/a/a/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    .line 110
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/e$1;->a:Lcom/mbridge/msdk/optimize/a/a/e;

    invoke-static {p2}, Lcom/mbridge/msdk/optimize/a/b/c$a;->a(Landroid/os/IBinder;)Lcom/mbridge/msdk/optimize/a/b/c;

    move-result-object p2

    iput-object p2, p1, Lcom/mbridge/msdk/optimize/a/a/e;->b:Lcom/mbridge/msdk/optimize/a/b/c;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 112
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public final onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    .line 118
    iget-object p1, p0, Lcom/mbridge/msdk/optimize/a/a/e$1;->a:Lcom/mbridge/msdk/optimize/a/a/e;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/mbridge/msdk/optimize/a/a/e;->b:Lcom/mbridge/msdk/optimize/a/b/c;

    return-void
.end method
