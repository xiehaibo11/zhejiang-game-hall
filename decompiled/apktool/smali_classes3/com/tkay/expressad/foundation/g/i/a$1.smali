.class final Lcom/tkay/expressad/foundation/g/i/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/media/MediaPlayer$OnPreparedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/g/i/a;->a(Landroid/media/MediaPlayer;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/g/i/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/g/i/a;)V
    .locals 0

    .line 45
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/i/a$1;->a:Lcom/tkay/expressad/foundation/g/i/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPrepared(Landroid/media/MediaPlayer;)V
    .locals 2

    .line 48
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/i/a$1;->a:Lcom/tkay/expressad/foundation/g/i/a;

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/i/a;->a:Ljava/lang/Object;

    monitor-enter v0

    .line 49
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/i/a$1;->a:Lcom/tkay/expressad/foundation/g/i/a;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/i/a;->a(Lcom/tkay/expressad/foundation/g/i/a;)Z

    .line 50
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/i/a$1;->a:Lcom/tkay/expressad/foundation/g/i/a;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/i/a;->b(Lcom/tkay/expressad/foundation/g/i/a;)Landroid/media/MediaPlayer$OnPreparedListener;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 51
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/i/a$1;->a:Lcom/tkay/expressad/foundation/g/i/a;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/i/a;->b(Lcom/tkay/expressad/foundation/g/i/a;)Landroid/media/MediaPlayer$OnPreparedListener;

    move-result-object v1

    invoke-interface {v1, p1}, Landroid/media/MediaPlayer$OnPreparedListener;->onPrepared(Landroid/media/MediaPlayer;)V

    .line 53
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method
