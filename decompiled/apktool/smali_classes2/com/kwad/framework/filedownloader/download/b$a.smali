.class final Lcom/kwad/framework/filedownloader/download/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/framework/filedownloader/download/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "a"
.end annotation


# static fields
.field private static final act:Lcom/kwad/framework/filedownloader/download/b;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/kwad/framework/filedownloader/download/b;

    invoke-direct {v0}, Lcom/kwad/framework/filedownloader/download/b;-><init>()V

    sput-object v0, Lcom/kwad/framework/filedownloader/download/b$a;->act:Lcom/kwad/framework/filedownloader/download/b;

    return-void
.end method

.method static synthetic uy()Lcom/kwad/framework/filedownloader/download/b;
    .locals 1

    sget-object v0, Lcom/kwad/framework/filedownloader/download/b$a;->act:Lcom/kwad/framework/filedownloader/download/b;

    return-object v0
.end method
