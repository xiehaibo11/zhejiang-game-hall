.class Lcom/sigmob/sdk/mraid2/c$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid2/b$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid2/c$2;->a(Lcom/sigmob/sdk/mraid2/e;I)Landroid/widget/LinearLayout;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid2/c$2;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid2/c$2;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/c$2$1;->a:Lcom/sigmob/sdk/mraid2/c$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/mraid2/e;II)V
    .locals 1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid2/e;->getMraidBridge()Lcom/sigmob/sdk/mraid2/b;

    move-result-object p1

    invoke-virtual {p1, p2, p3}, Lcom/sigmob/sdk/mraid2/b;->a(II)V

    :cond_0
    return-void
.end method
