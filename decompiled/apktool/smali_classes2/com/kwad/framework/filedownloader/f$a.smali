.class final Lcom/kwad/framework/filedownloader/f$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/framework/filedownloader/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static final aaW:Lcom/kwad/framework/filedownloader/f;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/framework/filedownloader/f;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/framework/filedownloader/f;-><init>(B)V

    sput-object v0, Lcom/kwad/framework/filedownloader/f$a;->aaW:Lcom/kwad/framework/filedownloader/f;

    return-void
.end method

.method static synthetic tC()Lcom/kwad/framework/filedownloader/f;
    .locals 1

    sget-object v0, Lcom/kwad/framework/filedownloader/f$a;->aaW:Lcom/kwad/framework/filedownloader/f;

    return-object v0
.end method
