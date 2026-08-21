.class public final Lcom/kwad/sdk/utils/br$a;
.super Ljava/util/zip/ZipOutputStream;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/utils/br;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private aKC:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Ljava/io/OutputStream;)V
    .locals 0

    invoke-direct {p0, p1}, Ljava/util/zip/ZipOutputStream;-><init>(Ljava/io/OutputStream;)V

    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/utils/br$a;->aKC:Ljava/util/Map;

    return-void
.end method


# virtual methods
.method public final putNextEntry(Ljava/util/zip/ZipEntry;)V
    .locals 6

    invoke-virtual {p1}, Ljava/util/zip/ZipEntry;->getName()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/utils/br$a;->aKC:Ljava/util/Map;

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v3

    if-lez v3, :cond_0

    new-instance v3, Ljava/util/zip/ZipEntry;

    invoke-virtual {p1}, Ljava/util/zip/ZipEntry;->getName()Ljava/lang/String;

    move-result-object p1

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "("

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v5, ")."

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "\\."

    invoke-virtual {p1, v5, v4}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v3, p1}, Ljava/util/zip/ZipEntry;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    add-int/2addr p1, v2

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    goto :goto_0

    :cond_0
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    move-object v3, p1

    move-object p1, v1

    :goto_0
    iget-object v1, p0, Lcom/kwad/sdk/utils/br$a;->aKC:Ljava/util/Map;

    invoke-interface {v1, v0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-super {p0, v3}, Ljava/util/zip/ZipOutputStream;->putNextEntry(Ljava/util/zip/ZipEntry;)V

    return-void
.end method
