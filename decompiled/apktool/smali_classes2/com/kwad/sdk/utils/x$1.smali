.class final Lcom/kwad/sdk/utils/x$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/utils/x;->ap(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic aAP:Ljava/lang/String;

.field final synthetic aIH:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/utils/x$1;->aIH:Ljava/lang/String;

    iput-object p2, p0, Lcom/kwad/sdk/utils/x$1;->aAP:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/utils/x$1;->aIH:Ljava/lang/String;

    const-string v1, "ksadsdk_kv_perf"

    const/4 v2, 0x0

    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/utils/bb;->c(Ljava/lang/String;Ljava/lang/String;I)I

    move-result v0

    iget-object v2, p0, Lcom/kwad/sdk/utils/x$1;->aAP:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/utils/x$1;->aIH:Ljava/lang/String;

    invoke-static {v1, v0}, Lcom/kwad/sdk/utils/bb;->ar(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    add-int/lit8 v0, v0, 0x1

    iget-object v2, p0, Lcom/kwad/sdk/utils/x$1;->aIH:Ljava/lang/String;

    invoke-static {v1, v2, v0}, Lcom/kwad/sdk/utils/bb;->b(Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method
