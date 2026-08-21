.class final Lcom/tkay/expressad/video/module/TkayContainerView$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/video/module/TkayContainerView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/video/signal/factory/b;

.field final synthetic b:Lcom/tkay/expressad/video/module/TkayContainerView;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 0

    .line 225
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayContainerView$2;->b:Lcom/tkay/expressad/video/module/TkayContainerView;

    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayContainerView$2;->a:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 228
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayContainerView$2;->b:Lcom/tkay/expressad/video/module/TkayContainerView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayContainerView$2;->a:Lcom/tkay/expressad/video/signal/factory/b;

    iget-object v2, v0, Lcom/tkay/expressad/video/module/TkayContainerView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->F()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/video/module/TkayContainerView;->a(Lcom/tkay/expressad/video/module/TkayContainerView;Lcom/tkay/expressad/video/signal/factory/b;Ljava/lang/Integer;)V

    return-void
.end method
