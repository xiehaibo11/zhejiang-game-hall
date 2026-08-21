.class Lcom/sigmob/sdk/nativead/w$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/x;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/w;->a(Landroid/view/View;Ljava/util/List;Ljava/util/List;Landroid/view/View;Lcom/sigmob/windad/natives/NativeADEventListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/w;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/w;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/w$5;->a:Lcom/sigmob/sdk/nativead/w;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(ZLcom/sigmob/sdk/base/a;)V
    .locals 1

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/w$5;->a:Lcom/sigmob/sdk/nativead/w;

    invoke-static {p2}, Lcom/sigmob/sdk/nativead/w;->f(Lcom/sigmob/sdk/nativead/w;)Lcom/sigmob/windad/natives/NativeADEventListener;

    move-result-object p2

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/w$5;->a:Lcom/sigmob/sdk/nativead/w;

    invoke-static {p2}, Lcom/sigmob/sdk/nativead/w;->f(Lcom/sigmob/sdk/nativead/w;)Lcom/sigmob/windad/natives/NativeADEventListener;

    move-result-object p2

    invoke-interface {p2}, Lcom/sigmob/windad/natives/NativeADEventListener;->onAdClicked()V

    :cond_0
    if-nez p1, :cond_1

    return-void

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/w$5;->a:Lcom/sigmob/sdk/nativead/w;

    invoke-virtual {p1}, Lcom/sigmob/sdk/nativead/w;->j()Lcom/sigmob/sdk/base/common/ab;

    move-result-object p1

    if-eqz p1, :cond_2

    sget-object p2, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    const/4 v0, 0x0

    invoke-interface {p1, p2, v0}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_2
    return-void
.end method
