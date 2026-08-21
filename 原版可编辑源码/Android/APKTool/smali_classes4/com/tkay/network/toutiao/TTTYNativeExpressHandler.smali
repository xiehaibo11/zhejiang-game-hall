.class public Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;
    }
.end annotation


# static fields
.field static final a:Ljava/lang/String;


# instance fields
.field final b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bykv/vk/openvk/TTNtExpressObject;",
            ">;"
        }
    .end annotation
.end field

.field final c:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bykv/vk/openvk/TTNtExpressObject;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 13
    const-class v0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bykv/vk/openvk/TTNtExpressObject;",
            ">;)V"
        }
    .end annotation

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->b:Ljava/util/List;

    .line 21
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->c:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public startRender(Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;)V
    .locals 4

    const/4 v0, 0x1

    new-array v0, v0, [I

    .line 26
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->b:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x0

    aput v1, v0, v2

    .line 27
    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;->b:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/bykv/vk/openvk/TTNtExpressObject;

    .line 30
    new-instance v3, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;

    invoke-direct {v3, p0, v0, p1, v2}, Lcom/tkay/network/toutiao/TTTYNativeExpressHandler$1;-><init>(Lcom/tkay/network/toutiao/TTTYNativeExpressHandler;[ILcom/tkay/network/toutiao/TTTYNativeExpressHandler$RenderCallback;Lcom/bykv/vk/openvk/TTNtExpressObject;)V

    invoke-interface {v2, v3}, Lcom/bykv/vk/openvk/TTNtExpressObject;->setExpressInteractionListener(Lcom/bykv/vk/openvk/TTNtExpressObject$ExpressNtInteractionListener;)V

    .line 76
    invoke-interface {v2}, Lcom/bykv/vk/openvk/TTNtExpressObject;->render()V

    goto :goto_0

    :cond_0
    return-void
.end method
