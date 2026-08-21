.class final Lcom/tkay/expressad/exoplayer/l/f$a;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/hardware/display/DisplayManager$DisplayListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/l/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x12
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/exoplayer/l/f;

.field private final b:Landroid/hardware/display/DisplayManager;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/l/f;Landroid/hardware/display/DisplayManager;)V
    .locals 0

    .line 240
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/l/f$a;->a:Lcom/tkay/expressad/exoplayer/l/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 241
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/l/f$a;->b:Landroid/hardware/display/DisplayManager;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 245
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/f$a;->b:Landroid/hardware/display/DisplayManager;

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/hardware/display/DisplayManager;->registerDisplayListener(Landroid/hardware/display/DisplayManager$DisplayListener;Landroid/os/Handler;)V

    return-void
.end method

.method public final b()V
    .locals 1

    .line 249
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/f$a;->b:Landroid/hardware/display/DisplayManager;

    invoke-virtual {v0, p0}, Landroid/hardware/display/DisplayManager;->unregisterDisplayListener(Landroid/hardware/display/DisplayManager$DisplayListener;)V

    return-void
.end method

.method public final onDisplayAdded(I)V
    .locals 0

    return-void
.end method

.method public final onDisplayChanged(I)V
    .locals 0

    if-nez p1, :cond_0

    .line 265
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/l/f$a;->a:Lcom/tkay/expressad/exoplayer/l/f;

    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/l/f;->a(Lcom/tkay/expressad/exoplayer/l/f;)V

    :cond_0
    return-void
.end method

.method public final onDisplayRemoved(I)V
    .locals 0

    return-void
.end method
