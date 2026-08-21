.class Lcom/czhj/devicehelper/oaId/helpers/f$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/devicehelper/oaId/helpers/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/devicehelper/oaId/helpers/f;


# direct methods
.method constructor <init>(Lcom/czhj/devicehelper/oaId/helpers/f;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/f$1;->a:Lcom/czhj/devicehelper/oaId/helpers/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    :try_start_0
    iget-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/f$1;->a:Lcom/czhj/devicehelper/oaId/helpers/f;

    iget-object p1, p1, Lcom/czhj/devicehelper/oaId/helpers/f;->c:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {p1, p2}, Ljava/util/concurrent/LinkedBlockingQueue;->put(Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/InterruptedException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 1

    iget-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/f$1;->a:Lcom/czhj/devicehelper/oaId/helpers/f;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/czhj/devicehelper/oaId/helpers/f;->b:Lcom/czhj/devicehelper/oaId/interfaces/d;

    return-void
.end method
