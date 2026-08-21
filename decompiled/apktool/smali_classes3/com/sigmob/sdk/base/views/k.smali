.class public Lcom/sigmob/sdk/base/views/k;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/views/k$a;,
        Lcom/sigmob/sdk/base/views/k$b;
    }
.end annotation


# static fields
.field private static final a:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static final b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static final serialVersionUID:J


# instance fields
.field private final c:Ljava/lang/String;

.field private final d:Lcom/sigmob/sdk/base/views/k$b;

.field private final e:Lcom/sigmob/sdk/base/views/k$a;

.field private final f:I

.field private final g:I


# direct methods
.method static constructor <clinit>()V
    .locals 4

    const-string v0, "image/jpeg"

    const-string v1, "image/png"

    const-string v2, "image/bmp"

    const-string v3, "image/gif"

    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/views/k;->a:Ljava/util/List;

    const-string v0, "application/x-javascript"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/base/views/k;->b:Ljava/util/List;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Lcom/sigmob/sdk/base/views/k$b;Lcom/sigmob/sdk/base/views/k$a;II)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-static {p3}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/k;->c:Ljava/lang/String;

    iput-object p2, p0, Lcom/sigmob/sdk/base/views/k;->d:Lcom/sigmob/sdk/base/views/k$b;

    iput-object p3, p0, Lcom/sigmob/sdk/base/views/k;->e:Lcom/sigmob/sdk/base/views/k$a;

    iput p4, p0, Lcom/sigmob/sdk/base/views/k;->f:I

    iput p5, p0, Lcom/sigmob/sdk/base/views/k;->g:I

    return-void
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/k;->c:Ljava/lang/String;

    return-object v0
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    sget-object v0, Lcom/sigmob/sdk/base/views/k$1;->a:[I

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/k;->d:Lcom/sigmob/sdk/base/views/k$b;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/views/k$b;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    const-string v2, "CreativeType.JAVASCRIPT"

    const-string v3, "CreativeType.IMAGE"

    const/4 v4, 0x0

    if-eq v0, v1, :cond_4

    const/4 v1, 0x2

    if-eq v0, v1, :cond_4

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    const/4 v1, 0x4

    if-eq v0, v1, :cond_4

    const/4 v1, 0x5

    if-eq v0, v1, :cond_4

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/base/views/k$a;->b:Lcom/sigmob/sdk/base/views/k$a;

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/k;->e:Lcom/sigmob/sdk/base/views/k$a;

    if-ne v0, v1, :cond_2

    invoke-static {v3}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-object p2

    :cond_1
    return-object p1

    :cond_2
    sget-object p1, Lcom/sigmob/sdk/base/views/k$a;->c:Lcom/sigmob/sdk/base/views/k$a;

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/k;->e:Lcom/sigmob/sdk/base/views/k$a;

    if-ne p1, v0, :cond_3

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-object p2

    :cond_3
    return-object v4

    :cond_4
    sget-object v0, Lcom/sigmob/sdk/base/views/k$a;->b:Lcom/sigmob/sdk/base/views/k$a;

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/k;->e:Lcom/sigmob/sdk/base/views/k$a;

    if-ne v0, v1, :cond_6

    invoke-static {v3}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_5

    return-object p1

    :cond_5
    return-object v4

    :cond_6
    sget-object p1, Lcom/sigmob/sdk/base/views/k$a;->c:Lcom/sigmob/sdk/base/views/k$a;

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/k;->e:Lcom/sigmob/sdk/base/views/k$a;

    if-ne p1, v0, :cond_7

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-object p2

    :cond_7
    :goto_0
    return-object v4
.end method

.method public a(Lcom/sigmob/sdk/base/views/l;)V
    .locals 2

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    sget-object v0, Lcom/sigmob/sdk/base/views/k$1;->a:[I

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/k;->d:Lcom/sigmob/sdk/base/views/k$b;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/views/k$b;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_6

    const/4 v1, 0x2

    if-eq v0, v1, :cond_5

    const/4 v1, 0x3

    if-eq v0, v1, :cond_3

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    const/4 v1, 0x5

    if-eq v0, v1, :cond_0

    goto/16 :goto_4

    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/k;->c:Ljava/lang/String;

    :goto_1
    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/views/l;->loadUrl(Ljava/lang/String;)V

    goto/16 :goto_4

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/k;->c:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, "file://"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/k;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_1

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/k;->e:Lcom/sigmob/sdk/base/views/k$a;

    sget-object v1, Lcom/sigmob/sdk/base/views/k$a;->b:Lcom/sigmob/sdk/base/views/k$a;

    if-ne v0, v1, :cond_4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "<html><head></head><body style=\"margin:0;padding:0\"><img src=\""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/k;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\" width=\"100%\" style=\"max-width:100%;max-height:100%;\" /></body></html>"

    goto :goto_2

    :cond_4
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/k;->e:Lcom/sigmob/sdk/base/views/k$a;

    sget-object v1, Lcom/sigmob/sdk/base/views/k$a;->c:Lcom/sigmob/sdk/base/views/k$a;

    if-ne v0, v1, :cond_7

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "<script src=\""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/k;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\"></script>"

    goto :goto_2

    :cond_5
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/k;->c:Ljava/lang/String;

    goto :goto_3

    :cond_6
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "<iframe frameborder=\"0\" scrolling=\"no\" marginheight=\"0\" marginwidth=\"0\" style=\"border: 0px; margin: 0px;\" width=\""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/sigmob/sdk/base/views/k;->f:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "\" height=\""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/sigmob/sdk/base/views/k;->g:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "\" src=\""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/k;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\"></iframe>"

    :goto_2
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_3
    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/views/l;->a(Ljava/lang/String;)V

    :cond_7
    :goto_4
    return-void
.end method

.method public b()Lcom/sigmob/sdk/base/views/k$b;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/k;->d:Lcom/sigmob/sdk/base/views/k$b;

    return-object v0
.end method

.method public c()Lcom/sigmob/sdk/base/views/k$a;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/k;->e:Lcom/sigmob/sdk/base/views/k$a;

    return-object v0
.end method
