.class final Lcom/kwad/components/ad/reward/j/f$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/j/f;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic xw:Ljava/lang/String;

.field final synthetic xx:Lcom/kwad/components/ad/reward/j/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/j/f;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j/f$1;->xx:Lcom/kwad/components/ad/reward/j/f;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j/f$1;->xw:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    :try_start_0
    new-instance v0, Lcom/kwad/components/ad/reward/j/f$a;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/j/f$a;-><init>()V

    new-instance v1, Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/j/f$1;->xw:Ljava/lang/String;

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j/f$a;->parseJson(Lorg/json/JSONObject;)V

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j/f$a;->xy:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 v0, 0x0

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/ad/reward/j/f$1;->xx:Lcom/kwad/components/ad/reward/j/f;

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/reward/j/f;->W(Z)V

    return-void
.end method
