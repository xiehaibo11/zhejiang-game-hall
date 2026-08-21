.class public final Lcom/kwad/sdk/core/b/a/bo;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/components/ad/reward/k$c;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/components/ad/reward/k$c;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "style"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/k$c;->style:I

    const-string v0, "title"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->title:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->title:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/components/ad/reward/k$c;->title:Ljava/lang/String;

    :cond_1
    const-string v0, "closeBtnText"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qh:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qh:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/components/ad/reward/k$c;->qh:Ljava/lang/String;

    :cond_2
    const-string v0, "continueBtnText"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qi:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qi:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/components/ad/reward/k$c;->qi:Ljava/lang/String;

    :cond_3
    const-string v0, "viewDetailText"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qj:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qj:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/components/ad/reward/k$c;->qj:Ljava/lang/String;

    :cond_4
    const-string v0, "unWatchedVideoTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qk:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qk:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_5

    iput-object v2, p0, Lcom/kwad/components/ad/reward/k$c;->qk:Ljava/lang/String;

    :cond_5
    const-string v0, "iconUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->ql:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->ql:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_6

    iput-object v2, p0, Lcom/kwad/components/ad/reward/k$c;->ql:Ljava/lang/String;

    :cond_6
    const-string v0, "desc"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qm:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qm:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_7

    iput-object v2, p0, Lcom/kwad/components/ad/reward/k$c;->qm:Ljava/lang/String;

    :cond_7
    const-string v0, "descTxt"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qn:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qn:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_8

    iput-object v2, p0, Lcom/kwad/components/ad/reward/k$c;->qn:Ljava/lang/String;

    :cond_8
    const-string v0, "currentPlayTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/k$c;->qo:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/k$c;->qo:Ljava/lang/String;

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p1, v0, :cond_9

    iput-object v2, p0, Lcom/kwad/components/ad/reward/k$c;->qo:Ljava/lang/String;

    :cond_9
    return-void
.end method

.method private static b(Lcom/kwad/components/ad/reward/k$c;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 3

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/components/ad/reward/k$c;->style:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/components/ad/reward/k$c;->style:I

    const-string v1, "style"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->title:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->title:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->title:Ljava/lang/String;

    const-string v2, "title"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qh:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qh:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qh:Ljava/lang/String;

    const-string v2, "closeBtnText"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qi:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qi:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qi:Ljava/lang/String;

    const-string v2, "continueBtnText"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qj:Ljava/lang/String;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qj:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qj:Ljava/lang/String;

    const-string v2, "viewDetailText"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qk:Ljava/lang/String;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qk:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qk:Ljava/lang/String;

    const-string v2, "unWatchedVideoTime"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->ql:Ljava/lang/String;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->ql:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->ql:Ljava/lang/String;

    const-string v2, "iconUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qm:Ljava/lang/String;

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qm:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_8

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qm:Ljava/lang/String;

    const-string v2, "desc"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qn:Ljava/lang/String;

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qn:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_9

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qn:Ljava/lang/String;

    const-string v2, "descTxt"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qo:Ljava/lang/String;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/kwad/components/ad/reward/k$c;->qo:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_a

    iget-object p0, p0, Lcom/kwad/components/ad/reward/k$c;->qo:Ljava/lang/String;

    const-string v0, "currentPlayTime"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/k$c;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/bo;->a(Lcom/kwad/components/ad/reward/k$c;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/k$c;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/bo;->b(Lcom/kwad/components/ad/reward/k$c;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
