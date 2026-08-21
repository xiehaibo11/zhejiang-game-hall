.class Lcom/czhj/devicehelper/oaId/helpers/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/ServiceConnection;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/devicehelper/oaId/helpers/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/devicehelper/oaId/helpers/c;


# direct methods
.method constructor <init>(Lcom/czhj/devicehelper/oaId/helpers/c;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/c$1;->a:Lcom/czhj/devicehelper/oaId/helpers/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    :try_start_0
    iget-object p1, p0, Lcom/czhj/devicehelper/oaId/helpers/c$1;->a:Lcom/czhj/devicehelper/oaId/helpers/c;

    iget-object p1, p1, Lcom/czhj/devicehelper/oaId/helpers/c;->b:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {p1, p2}, Ljava/util/concurrent/LinkedBlockingQueue;->put(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public onServiceDisconnected(Landroid/content/ComponentName;)V
    .locals 0

    return-void
.end method
