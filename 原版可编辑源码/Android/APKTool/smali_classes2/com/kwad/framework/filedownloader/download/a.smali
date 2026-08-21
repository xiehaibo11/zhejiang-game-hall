.class public final Lcom/kwad/framework/filedownloader/download/a;
.super Ljava/lang/Object;


# instance fields
.field final ack:J

.field final acl:J

.field final acm:J

.field final contentLength:J


# direct methods
.method constructor <init>(JJJJ)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-wide p1, p0, Lcom/kwad/framework/filedownloader/download/a;->ack:J

    iput-wide p3, p0, Lcom/kwad/framework/filedownloader/download/a;->acl:J

    iput-wide p5, p0, Lcom/kwad/framework/filedownloader/download/a;->acm:J

    iput-wide p7, p0, Lcom/kwad/framework/filedownloader/download/a;->contentLength:J

    return-void
.end method


# virtual methods
.method public final toString()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/Object;

    iget-wide v1, p0, Lcom/kwad/framework/filedownloader/download/a;->ack:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    iget-wide v1, p0, Lcom/kwad/framework/filedownloader/download/a;->acm:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const/4 v2, 0x1

    aput-object v1, v0, v2

    iget-wide v1, p0, Lcom/kwad/framework/filedownloader/download/a;->acl:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const/4 v2, 0x2

    aput-object v1, v0, v2

    const-string v1, "range[%d, %d) current offset[%d]"

    invoke-static {v1, v0}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
