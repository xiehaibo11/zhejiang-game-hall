.class final Lcom/kwad/sdk/utils/f$d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/utils/f$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/utils/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "d"
.end annotation


# instance fields
.field private aHX:Lcom/kwad/sdk/utils/f$b;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/utils/f$b;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwad/sdk/utils/f$d;->aHX:Lcom/kwad/sdk/utils/f$b;

    return-void
.end method


# virtual methods
.method public final q(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/collector/model/b;",
            ">;)V"
        }
    .end annotation

    invoke-static {p1}, Lcom/kwad/sdk/utils/f$a;->F(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/f;->HO()Lcom/kwad/sdk/collector/h;

    move-result-object v1

    invoke-interface {v1, v0}, Lcom/kwad/sdk/collector/h;->c(Lorg/json/JSONArray;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/utils/f$d;->aHX:Lcom/kwad/sdk/utils/f$b;

    if-eqz v0, :cond_1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/utils/f$b;->q(Ljava/util/List;)V

    :cond_1
    return-void
.end method
