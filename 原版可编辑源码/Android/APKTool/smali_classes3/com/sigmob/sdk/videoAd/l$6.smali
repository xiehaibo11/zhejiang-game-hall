.class Lcom/sigmob/sdk/videoAd/l$6;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;->a(Landroid/content/Context;Lcom/sigmob/sdk/videoAd/h;I)Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$6;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$6;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->S(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/a;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$6;->a:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->S(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/a;->show()V

    :cond_0
    return-void
.end method
