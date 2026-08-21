.class final Lcom/kwad/components/ad/splashscreen/c/l$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/splashscreen/h$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/l;->ab(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Dn:Lcom/kwad/components/ad/splashscreen/c/l;

.field final synthetic Do:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/l;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/l$3;->Dn:Lcom/kwad/components/ad/splashscreen/c/l;

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/l$3;->Do:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final b(Lcom/kwad/sdk/core/report/j;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l$3;->Do:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/report/j;->du(Ljava/lang/String;)Lcom/kwad/sdk/core/report/j;

    return-void
.end method
