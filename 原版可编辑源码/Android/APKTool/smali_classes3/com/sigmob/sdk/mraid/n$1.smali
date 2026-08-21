.class Lcom/sigmob/sdk/mraid/n$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/videoplayer/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid/n;->a(Landroid/content/Context;Lorg/json/JSONObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/n;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/n;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(JJ)V
    .locals 7

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object v1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    iget-object v2, v0, Lcom/sigmob/sdk/mraid/n;->a:Ljava/lang/String;

    move-wide v3, p1

    move-wide v5, p3

    invoke-interface/range {v1 .. v6}, Lcom/sigmob/sdk/mraid/n$a;->a(Ljava/lang/String;JJ)V

    :cond_0
    return-void
.end method

.method public a(Lcom/sigmob/sdk/videoplayer/e;)V
    .locals 9

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "VIDEO_PLAYER_STATE change: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    sget-object v0, Lcom/sigmob/sdk/mraid/n$2;->a:[I

    invoke-virtual {p1}, Lcom/sigmob/sdk/videoplayer/e;->ordinal()I

    move-result p1

    aget p1, v0, p1

    const/4 v0, 0x4

    const/4 v1, 0x1

    const/4 v2, 0x2

    packed-switch p1, :pswitch_data_0

    goto/16 :goto_1

    :pswitch_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    iget-object v1, v1, Lcom/sigmob/sdk/mraid/n;->a:Ljava/lang/String;

    invoke-interface {p1, v1, v0}, Lcom/sigmob/sdk/mraid/n$a;->a(Ljava/lang/String;I)V

    goto/16 :goto_1

    :pswitch_1
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->b(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/l;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->d()V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/n;->a:Ljava/lang/String;

    invoke-interface {p1, v0, v2}, Lcom/sigmob/sdk/mraid/n$a;->b(Ljava/lang/String;I)V

    goto/16 :goto_1

    :pswitch_2
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->b(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/l;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->i()V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/n;->a:Ljava/lang/String;

    const/16 v1, 0x8

    goto :goto_0

    :pswitch_3
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/n;->a:Ljava/lang/String;

    :goto_0
    invoke-interface {p1, v0, v1}, Lcom/sigmob/sdk/mraid/n$a;->b(Ljava/lang/String;I)V

    goto/16 :goto_1

    :pswitch_4
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object v0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    iget-object v1, p1, Lcom/sigmob/sdk/mraid/n;->a:Ljava/lang/String;

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->b(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/l;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->getDuration()J

    move-result-wide v2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->b(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/l;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->getDuration()J

    move-result-wide v4

    invoke-interface/range {v0 .. v5}, Lcom/sigmob/sdk/mraid/n$a;->a(Ljava/lang/String;JJ)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/n;->a:Ljava/lang/String;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/n;->b(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/l;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/mraid/l;->getDuration()J

    move-result-wide v1

    invoke-interface {p1, v0, v1, v2}, Lcom/sigmob/sdk/mraid/n$a;->a(Ljava/lang/String;J)V

    goto/16 :goto_1

    :pswitch_5
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/n;->a:Ljava/lang/String;

    invoke-interface {p1, v0, v1}, Lcom/sigmob/sdk/mraid/n$a;->a(Ljava/lang/String;I)V

    goto/16 :goto_1

    :pswitch_6
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    iget-object v0, v0, Lcom/sigmob/sdk/mraid/n;->a:Ljava/lang/String;

    invoke-interface {p1, v0, v2}, Lcom/sigmob/sdk/mraid/n$a;->a(Ljava/lang/String;I)V

    goto/16 :goto_1

    :pswitch_7
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->b(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/l;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->getErrorCode()I

    move-result p1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/n;->b(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/l;->getErrorMessage()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {v1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    iget-object v2, v2, Lcom/sigmob/sdk/mraid/n;->a:Ljava/lang/String;

    invoke-interface {v1, v2, p1, v0}, Lcom/sigmob/sdk/mraid/n$a;->a(Ljava/lang/String;ILjava/lang/String;)V

    goto :goto_1

    :pswitch_8
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->b(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/l;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->getDuration()J

    move-result-wide v5

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->b(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/l;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->getVideoWidth()I

    move-result v7

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->b(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/l;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/l;->getVideoHeight()I

    move-result v8

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object v3

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    iget-object v4, p1, Lcom/sigmob/sdk/mraid/n;->a:Ljava/lang/String;

    invoke-interface/range {v3 .. v8}, Lcom/sigmob/sdk/mraid/n$a;->a(Ljava/lang/String;JII)V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    iget-object v1, v1, Lcom/sigmob/sdk/mraid/n;->a:Ljava/lang/String;

    invoke-interface {p1, v1, v2}, Lcom/sigmob/sdk/mraid/n$a;->b(Ljava/lang/String;I)V

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/n;->a(Lcom/sigmob/sdk/mraid/n;)Lcom/sigmob/sdk/mraid/n$a;

    move-result-object p1

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/n$1;->a:Lcom/sigmob/sdk/mraid/n;

    iget-object v1, v1, Lcom/sigmob/sdk/mraid/n;->a:Ljava/lang/String;

    invoke-interface {p1, v1, v0}, Lcom/sigmob/sdk/mraid/n$a;->b(Ljava/lang/String;I)V

    :cond_2
    :goto_1
    return-void

    :pswitch_data_0
    .packed-switch 0x1
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
