.class public final Lcom/kwad/framework/filedownloader/download/e$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/framework/filedownloader/download/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field Tt:Ljava/lang/String;

.field acW:Ljava/lang/Boolean;

.field acZ:Lcom/kwad/framework/filedownloader/download/f;

.field aci:Ljava/lang/Integer;

.field acj:Lcom/kwad/framework/filedownloader/download/a;

.field add:Ljava/lang/Integer;

.field ads:Lcom/kwad/framework/filedownloader/a/b;

.field adw:Lcom/kwad/framework/filedownloader/download/c;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/framework/filedownloader/download/c;)Lcom/kwad/framework/filedownloader/download/e$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/e$a;->adw:Lcom/kwad/framework/filedownloader/download/c;

    return-object p0
.end method

.method public final aY(Z)Lcom/kwad/framework/filedownloader/download/e$a;
    .locals 0

    invoke-static {p1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/e$a;->acW:Ljava/lang/Boolean;

    return-object p0
.end method

.method public final b(Lcom/kwad/framework/filedownloader/download/f;)Lcom/kwad/framework/filedownloader/download/e$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/e$a;->acZ:Lcom/kwad/framework/filedownloader/download/f;

    return-object p0
.end method

.method public final bg(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/download/e$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/e$a;->Tt:Ljava/lang/String;

    return-object p0
.end method

.method public final bq(I)Lcom/kwad/framework/filedownloader/download/e$a;
    .locals 0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/e$a;->add:Ljava/lang/Integer;

    return-object p0
.end method

.method public final br(I)Lcom/kwad/framework/filedownloader/download/e$a;
    .locals 0

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/e$a;->aci:Ljava/lang/Integer;

    return-object p0
.end method

.method public final c(Lcom/kwad/framework/filedownloader/download/a;)Lcom/kwad/framework/filedownloader/download/e$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/e$a;->acj:Lcom/kwad/framework/filedownloader/download/a;

    return-object p0
.end method

.method public final d(Lcom/kwad/framework/filedownloader/a/b;)Lcom/kwad/framework/filedownloader/download/e$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/e$a;->ads:Lcom/kwad/framework/filedownloader/a/b;

    return-object p0
.end method

.method public final uT()Lcom/kwad/framework/filedownloader/download/e;
    .locals 12

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/e$a;->acW:Ljava/lang/Boolean;

    if-eqz v0, :cond_0

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/download/e$a;->ads:Lcom/kwad/framework/filedownloader/a/b;

    if-eqz v2, :cond_0

    iget-object v3, p0, Lcom/kwad/framework/filedownloader/download/e$a;->acj:Lcom/kwad/framework/filedownloader/download/a;

    if-eqz v3, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/e$a;->acZ:Lcom/kwad/framework/filedownloader/download/f;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/e$a;->Tt:Ljava/lang/String;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/e$a;->aci:Ljava/lang/Integer;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/download/e$a;->add:Ljava/lang/Integer;

    if-eqz v1, :cond_0

    new-instance v11, Lcom/kwad/framework/filedownloader/download/e;

    iget-object v4, p0, Lcom/kwad/framework/filedownloader/download/e$a;->adw:Lcom/kwad/framework/filedownloader/download/c;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v5

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/e$a;->add:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/e$a;->acW:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v7

    iget-object v8, p0, Lcom/kwad/framework/filedownloader/download/e$a;->acZ:Lcom/kwad/framework/filedownloader/download/f;

    iget-object v9, p0, Lcom/kwad/framework/filedownloader/download/e$a;->Tt:Ljava/lang/String;

    const/4 v10, 0x0

    move-object v1, v11

    invoke-direct/range {v1 .. v10}, Lcom/kwad/framework/filedownloader/download/e;-><init>(Lcom/kwad/framework/filedownloader/a/b;Lcom/kwad/framework/filedownloader/download/a;Lcom/kwad/framework/filedownloader/download/c;IIZLcom/kwad/framework/filedownloader/download/f;Ljava/lang/String;B)V

    return-object v11

    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    invoke-direct {v0}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw v0
.end method
