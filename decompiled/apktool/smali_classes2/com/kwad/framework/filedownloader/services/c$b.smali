.class public final Lcom/kwad/framework/filedownloader/services/c$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/framework/filedownloader/services/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# instance fields
.field aem:Lcom/kwad/framework/filedownloader/f/c$c;

.field aen:Ljava/lang/Integer;

.field aeo:Lcom/kwad/framework/filedownloader/f/c$e;

.field aep:Lcom/kwad/framework/filedownloader/f/c$b;

.field aeq:Lcom/kwad/framework/filedownloader/services/c$a;

.field aer:Lcom/kwad/framework/filedownloader/f/c$a;

.field aes:Lcom/kwad/framework/filedownloader/f/c$d;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/framework/filedownloader/f/c$b;)Lcom/kwad/framework/filedownloader/services/c$b;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/services/c$b;->aep:Lcom/kwad/framework/filedownloader/f/c$b;

    return-object p0
.end method

.method public final a(Lcom/kwad/framework/filedownloader/services/c$a;)Lcom/kwad/framework/filedownloader/services/c$b;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/services/c$b;->aeq:Lcom/kwad/framework/filedownloader/services/c$a;

    return-object p0
.end method

.method public final bC(I)Lcom/kwad/framework/filedownloader/services/c$b;
    .locals 0

    const p1, 0x7fffffff

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/services/c$b;->aen:Ljava/lang/Integer;

    return-object p0
.end method

.method public final toString()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x5

    new-array v0, v0, [Ljava/lang/Object;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/services/c$b;->aem:Lcom/kwad/framework/filedownloader/f/c$c;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/services/c$b;->aen:Ljava/lang/Integer;

    const/4 v2, 0x1

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/services/c$b;->aeo:Lcom/kwad/framework/filedownloader/f/c$e;

    const/4 v2, 0x2

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/services/c$b;->aep:Lcom/kwad/framework/filedownloader/f/c$b;

    const/4 v2, 0x3

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/services/c$b;->aer:Lcom/kwad/framework/filedownloader/f/c$a;

    const/4 v2, 0x4

    aput-object v1, v0, v2

    const-string v1, "component: database[%s], maxNetworkCount[%s], outputStream[%s], connection[%s], connectionCountAdapter[%s]"

    invoke-static {v1, v0}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
