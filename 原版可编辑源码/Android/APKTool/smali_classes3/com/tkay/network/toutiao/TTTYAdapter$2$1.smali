.class final Lcom/tkay/network/toutiao/TTTYAdapter$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfNative$NtExpressVfListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYAdapter$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/tkay/network/toutiao/TTTYAdapter$2;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYAdapter$2;Z)V
    .locals 0

    .line 205
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$1;->b:Lcom/tkay/network/toutiao/TTTYAdapter$2;

    iput-boolean p2, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$1;->a:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onError(ILjava/lang/String;)V
    .locals 1

    .line 208
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$1;->b:Lcom/tkay/network/toutiao/TTTYAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/tkay/network/toutiao/TTTYAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onNtExpressVnLoad(Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bykv/vk/openvk/TTNtExpressObject;",
            ">;)V"
        }
    .end annotation

    .line 221
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$1;->b:Lcom/tkay/network/toutiao/TTTYAdapter$2;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYAdapter$2;->e:Lcom/tkay/network/toutiao/TTTYAdapter;

    iget-object v1, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$1;->b:Lcom/tkay/network/toutiao/TTTYAdapter$2;

    iget-object v1, v1, Lcom/tkay/network/toutiao/TTTYAdapter$2;->a:Landroid/content/Context;

    iget-boolean v2, p0, Lcom/tkay/network/toutiao/TTTYAdapter$2$1;->a:Z

    const/4 v3, 0x0

    invoke-static {v0, v1, p1, v2, v3}, Lcom/tkay/network/toutiao/TTTYAdapter;->a(Lcom/tkay/network/toutiao/TTTYAdapter;Landroid/content/Context;Ljava/util/List;ZZ)V

    return-void
.end method
