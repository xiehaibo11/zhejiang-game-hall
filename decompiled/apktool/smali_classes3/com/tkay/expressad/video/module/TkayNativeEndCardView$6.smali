.class final Lcom/tkay/expressad/video/module/TkayNativeEndCardView$6;
.super Lcom/tkay/expressad/shake/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->j()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic h:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;II)V
    .locals 0

    .line 840
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$6;->h:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-direct {p0, p2, p3}, Lcom/tkay/expressad/shake/b;-><init>(II)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 850
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$6;->h:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->p(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 854
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$6;->h:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    invoke-static {v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->q(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 858
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$6;->h:Lcom/tkay/expressad/video/module/TkayNativeEndCardView;

    const/4 v1, 0x4

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;I)V

    return-void
.end method
