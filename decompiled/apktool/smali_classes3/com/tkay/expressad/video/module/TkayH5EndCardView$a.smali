.class final Lcom/tkay/expressad/video/module/TkayH5EndCardView$a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/module/TkayH5EndCardView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

.field private b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/video/module/TkayH5EndCardView;Lcom/tkay/expressad/video/module/TkayH5EndCardView;)V
    .locals 0

    .line 257
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$a;->a:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 258
    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$a;->b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    const-wide/16 v0, 0x12c

    .line 264
    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 266
    invoke-virtual {v0}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 268
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$a;->b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->y:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 269
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayH5EndCardView$a;->b:Lcom/tkay/expressad/video/module/TkayH5EndCardView;

    iget-object v0, v0, Lcom/tkay/expressad/video/module/TkayH5EndCardView;->y:Landroid/os/Handler;

    const/16 v1, 0x64

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    :cond_0
    return-void
.end method
