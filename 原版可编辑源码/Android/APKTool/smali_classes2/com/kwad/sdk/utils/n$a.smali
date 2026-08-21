.class final Lcom/kwad/sdk/utils/n$a;
.super Lcom/kwad/sdk/k/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/utils/n;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/k/a/a;-><init>()V

    invoke-direct {p0}, Lcom/kwad/sdk/utils/n$a;->HW()V

    return-void
.end method

.method private HW()V
    .locals 3

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/utils/n$a;->aGk:Ljava/util/List;

    iget-object v0, p0, Lcom/kwad/sdk/utils/n$a;->aGk:Ljava/util/List;

    new-instance v1, Lcom/kwad/sdk/utils/n$a$1;

    iget-boolean v2, p0, Lcom/kwad/sdk/utils/n$a;->enabled:Z

    invoke-direct {v1, p0, v2}, Lcom/kwad/sdk/utils/n$a$1;-><init>(Lcom/kwad/sdk/utils/n$a;Z)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/kwad/sdk/utils/n$a;->aGk:Ljava/util/List;

    new-instance v1, Lcom/kwad/sdk/utils/n$a$2;

    iget-boolean v2, p0, Lcom/kwad/sdk/utils/n$a;->enabled:Z

    invoke-direct {v1, p0, v2}, Lcom/kwad/sdk/utils/n$a$2;-><init>(Lcom/kwad/sdk/utils/n$a;Z)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method
