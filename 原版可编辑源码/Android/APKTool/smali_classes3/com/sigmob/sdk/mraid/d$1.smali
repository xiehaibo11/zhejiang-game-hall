.class Lcom/sigmob/sdk/mraid/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid/b$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/d;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/d;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 5

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, " handleVpaidEvent event:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, " postMessage args:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const-string v0, "uniqueId"

    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, " handleVpaidEvent uniqueId is null:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void

    :cond_0
    const/4 v1, 0x0

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v2}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d;)Ljava/util/HashMap;

    move-result-object v2

    invoke-virtual {v2, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/sigmob/sdk/mraid/i;

    if-eqz v2, :cond_1

    instance-of v3, v2, Lcom/sigmob/sdk/mraid/n;

    if-eqz v3, :cond_1

    move-object v1, v2

    check-cast v1, Lcom/sigmob/sdk/mraid/n;

    :cond_1
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v2

    const/4 v3, 0x1

    const/4 v4, -0x1

    sparse-switch v2, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string v2, "pause"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x4

    goto :goto_1

    :sswitch_1
    const-string v2, "muted"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x6

    goto :goto_1

    :sswitch_2
    const-string v2, "frame"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/16 p1, 0x8

    goto :goto_1

    :sswitch_3
    const-string v2, "stop"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x5

    goto :goto_1

    :sswitch_4
    const-string v2, "seek"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x7

    goto :goto_1

    :sswitch_5
    const-string v2, "play"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x2

    goto :goto_1

    :sswitch_6
    const-string v2, "init"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x0

    goto :goto_1

    :sswitch_7
    const-string v2, "assetURL"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    move p1, v3

    goto :goto_1

    :sswitch_8
    const-string v2, "replay"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 p1, 0x3

    goto :goto_1

    :cond_2
    :goto_0
    move p1, v4

    :goto_1
    packed-switch p1, :pswitch_data_0

    goto/16 :goto_2

    :pswitch_0
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->h(Lorg/json/JSONObject;)V

    goto/16 :goto_2

    :pswitch_1
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->g(Lorg/json/JSONObject;)V

    goto/16 :goto_2

    :pswitch_2
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->f(Lorg/json/JSONObject;)V

    goto :goto_2

    :pswitch_3
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->e(Lorg/json/JSONObject;)V

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid/n;->c()V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d;)Ljava/util/HashMap;

    move-result-object p1

    invoke-virtual {p1, v1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_2

    :pswitch_4
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->d(Lorg/json/JSONObject;)V

    goto :goto_2

    :pswitch_5
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->c(Lorg/json/JSONObject;)V

    goto :goto_2

    :pswitch_6
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->b(Lorg/json/JSONObject;)V

    goto :goto_2

    :pswitch_7
    if-eqz v1, :cond_3

    invoke-virtual {v1, p2}, Lcom/sigmob/sdk/mraid/n;->a(Lorg/json/JSONObject;)V

    goto :goto_2

    :pswitch_8
    new-instance p1, Lcom/sigmob/sdk/mraid/n;

    invoke-direct {p1, v0}, Lcom/sigmob/sdk/mraid/n;-><init>(Ljava/lang/String;)V

    new-instance v1, Lcom/sigmob/sdk/mraid/d$1$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid/d$1$1;-><init>(Lcom/sigmob/sdk/mraid/d$1;)V

    invoke-virtual {p1, v1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n$a;)V

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d;)Ljava/util/HashMap;

    move-result-object v1

    invoke-virtual {v1, v0, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->c(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/o;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/o;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p1, v0, p2}, Lcom/sigmob/sdk/mraid/n;->a(Landroid/content/Context;Lorg/json/JSONObject;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/n;->b()Landroid/view/View;

    move-result-object p1

    if-eqz p1, :cond_3

    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {p2, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    iput v4, p2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    iput v4, p2, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/d;->d(Lcom/sigmob/sdk/mraid/d;)Landroid/widget/FrameLayout;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_3
    :goto_2
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x37b3b819 -> :sswitch_8
        -0x163ec7a1 -> :sswitch_7
        0x316510 -> :sswitch_6
        0x348b34 -> :sswitch_5
        0x35ce78 -> :sswitch_4
        0x360802 -> :sswitch_3
        0x5d2a96d -> :sswitch_2
        0x636f16b -> :sswitch_1
        0x65825f6 -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public b(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 0

    const-string p1, "uniqueId"

    invoke-virtual {p2, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_0

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d;)Ljava/util/HashMap;

    move-result-object p2

    invoke-virtual {p2, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/mraid/i;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/i;->b()Landroid/view/View;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/d;->d(Lcom/sigmob/sdk/mraid/d;)Landroid/widget/FrameLayout;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/d$1;->a:Lcom/sigmob/sdk/mraid/d;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid/d;->c(Lcom/sigmob/sdk/mraid/d;)Lcom/sigmob/sdk/mraid/o;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/widget/FrameLayout;->bringChildToFront(Landroid/view/View;)V

    :cond_0
    return-void
.end method
