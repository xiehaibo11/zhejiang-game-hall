.class final Lcom/kwad/sdk/ranger/e$1;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/ranger/e;->dG(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic aAv:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/ranger/e$1;->aAv:Ljava/lang/String;

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/ranger/e$1;->aAv:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    sget-object v0, Lcom/kwad/sdk/ranger/e;->TAG:Ljava/lang/String;

    const-string v1, "config is empty"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-static {v0}, Lcom/kwad/sdk/ranger/e;->fm(Ljava/lang/String;)Lcom/kwad/sdk/ranger/d;

    move-result-object v0

    if-eqz v0, :cond_1

    sget-object v1, Lcom/kwad/sdk/ranger/e;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "config:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/kwad/sdk/ranger/d;->toJson()Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/kwad/sdk/ranger/d;->Hp()Z

    move-result v1

    if-eqz v1, :cond_2

    goto :goto_0

    :cond_2
    invoke-static {v0}, Lcom/kwad/sdk/ranger/e;->d(Lcom/kwad/sdk/ranger/d;)V

    :cond_3
    :goto_0
    return-void
.end method
