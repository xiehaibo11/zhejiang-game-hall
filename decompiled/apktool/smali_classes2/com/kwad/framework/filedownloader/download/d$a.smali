.class public final Lcom/kwad/framework/filedownloader/download/d$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/framework/filedownloader/download/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private ado:Z

.field private adp:Ljava/lang/Exception;

.field private adq:I


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method final aX(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/framework/filedownloader/download/d$a;->ado:Z

    return-void
.end method

.method final bp(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/framework/filedownloader/download/d$a;->adq:I

    return-void
.end method

.method final f(Ljava/lang/Exception;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/download/d$a;->adp:Ljava/lang/Exception;

    return-void
.end method

.method public final getException()Ljava/lang/Exception;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/download/d$a;->adp:Ljava/lang/Exception;

    return-object v0
.end method

.method public final tb()I
    .locals 1

    iget v0, p0, Lcom/kwad/framework/filedownloader/download/d$a;->adq:I

    return v0
.end method

.method public final uR()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/download/d$a;->ado:Z

    return v0
.end method
