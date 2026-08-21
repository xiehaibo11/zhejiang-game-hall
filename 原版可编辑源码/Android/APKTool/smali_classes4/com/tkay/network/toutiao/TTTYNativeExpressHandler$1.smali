.class final Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressNtInteractionListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->startRender(Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:[I

.field final synthetic b:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;

.field final synthetic c:Lcom/bykv/vk/openvk/TTNtExpressObject;

.field final synthetic d:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;[ILcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;Lcom/bykv/vk/openvk/TTNtExpressObject;)V
    .locals 0

    .line 30
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->d:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;

    iput-object p2, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->a:[I

    iput-object p3, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->b:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;

    iput-object p4, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->c:Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClicked(Landroid/view/View;I)V
    .locals 0

    return-void
.end method

.method public final onRenderFail(Landroid/view/View;Ljava/lang/String;I)V
    .locals 4

    .line 41
    sget-object p1, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->a:Ljava/lang/String;

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    .line 42
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    const/4 v1, 0x1

    aput-object p2, v0, v1

    const-string v3, "onRenderFail, errorCode: %d, errorMsg: %s"

    .line 41
    invoke-static {v3, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 44
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->a:[I

    aget v0, p1, v2

    sub-int/2addr v0, v1

    aput v0, p1, v2

    .line 45
    aget p1, p1, v2

    if-nez p1, :cond_2

    .line 46
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->d:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->c:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-nez p1, :cond_0

    .line 47
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->b:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;

    if-eqz p1, :cond_2

    .line 48
    invoke-interface {p1, p2, p3}, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;->onRenderFail(Ljava/lang/String;I)V

    return-void

    .line 51
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->b:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;

    if-eqz p1, :cond_1

    .line 52
    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->d:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;

    iget-object p2, p2, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->c:Ljava/util/List;

    invoke-interface {p1, p2}, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;->onRenderSuccess(Ljava/util/List;)V

    .line 54
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->d:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->c:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    .line 55
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->d:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->b:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    :cond_2
    return-void
.end method

.method public final onRenderSuccess(Landroid/view/View;FF)V
    .locals 0

    .line 63
    sget-object p1, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->a:Ljava/lang/String;

    const-string p2, "onRenderSuccess()"

    invoke-static {p1, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 64
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->d:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->c:Ljava/util/List;

    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->c:Lcom/bykv/vk/openvk/TTNtExpressObject;

    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 65
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->a:[I

    const/4 p2, 0x0

    aget p3, p1, p2

    add-int/lit8 p3, p3, -0x1

    aput p3, p1, p2

    .line 66
    aget p1, p1, p2

    if-nez p1, :cond_1

    .line 67
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->b:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;

    if-eqz p1, :cond_0

    .line 68
    iget-object p2, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->d:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;

    iget-object p2, p2, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->c:Ljava/util/List;

    invoke-interface {p1, p2}, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;->onRenderSuccess(Ljava/util/List;)V

    .line 70
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->d:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->c:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    .line 71
    iget-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;->d:Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;

    iget-object p1, p1, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->b:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    :cond_1
    return-void
.end method

.method public final onShow(Landroid/view/View;I)V
    .locals 0

    return-void
.end method
