.class final Lcom/tkay/network/toutiao/TTTYInitManager$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/toutiao/TTTYInitManager$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/toutiao/TTTYInitManager$1;


# direct methods
.method constructor <init>(Lcom/tkay/network/toutiao/TTTYInitManager$1;)V
    .locals 0

    .line 188
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1$1;->a:Lcom/tkay/network/toutiao/TTTYInitManager$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final fail(ILjava/lang/String;)V
    .locals 2

    .line 203
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1$1;->a:Lcom/tkay/network/toutiao/TTTYInitManager$1;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->e:Lcom/tkay/network/toutiao/TTTYInitManager;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const/4 v1, 0x0

    invoke-static {v0, v1, p1, p2}, Lcom/tkay/network/toutiao/TTTYInitManager;->a(Lcom/tkay/network/toutiao/TTTYInitManager;ZLjava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final success()V
    .locals 4

    .line 192
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYInitManager$1$1;->a:Lcom/tkay/network/toutiao/TTTYInitManager$1;

    iget-object v0, v0, Lcom/tkay/network/toutiao/TTTYInitManager$1;->e:Lcom/tkay/network/toutiao/TTTYInitManager;

    invoke-static {v0}, Lcom/tkay/network/toutiao/TTTYInitManager;->c(Lcom/tkay/network/toutiao/TTTYInitManager;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/tkay/network/toutiao/TTTYInitManager$1$1$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/toutiao/TTTYInitManager$1$1$1;-><init>(Lcom/tkay/network/toutiao/TTTYInitManager$1$1;)V

    const-wide/16 v2, 0x64

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method
