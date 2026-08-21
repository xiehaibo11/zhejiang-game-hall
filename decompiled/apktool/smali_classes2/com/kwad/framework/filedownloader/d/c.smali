.class public final Lcom/kwad/framework/filedownloader/d/c;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/os/Parcelable;


# static fields
.field public static final CREATOR:Landroid/os/Parcelable$Creator;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/os/Parcelable$Creator<",
            "Lcom/kwad/framework/filedownloader/d/c;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private Tt:Ljava/lang/String;

.field private adN:Z

.field private aea:Z

.field private final aeb:Ljava/util/concurrent/atomic/AtomicInteger;

.field private final aec:Ljava/util/concurrent/atomic/AtomicLong;

.field private aed:J

.field private aee:Ljava/lang/String;

.field private aef:Ljava/lang/String;

.field private aeg:I

.field private filename:Ljava/lang/String;

.field private id:I

.field private url:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/kwad/framework/filedownloader/d/c$1;

    invoke-direct {v0}, Lcom/kwad/framework/filedownloader/d/c$1;-><init>()V

    sput-object v0, Lcom/kwad/framework/filedownloader/d/c;->CREATOR:Landroid/os/Parcelable$Creator;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicLong;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aec:Ljava/util/concurrent/atomic/AtomicLong;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>()V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aeb:Ljava/util/concurrent/atomic/AtomicInteger;

    return-void
.end method

.method protected constructor <init>(Landroid/os/Parcel;)V
    .locals 5

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/kwad/framework/filedownloader/d/c;->id:I

    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->url:Ljava/lang/String;

    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->Tt:Ljava/lang/String;

    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aea:Z

    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->filename:Ljava/lang/String;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result v3

    invoke-direct {v0, v3}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aeb:Ljava/util/concurrent/atomic/AtomicInteger;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v3

    invoke-direct {v0, v3, v4}, Ljava/util/concurrent/atomic/AtomicLong;-><init>(J)V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aec:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {p1}, Landroid/os/Parcel;->readLong()J

    move-result-wide v3

    iput-wide v3, p0, Lcom/kwad/framework/filedownloader/d/c;->aed:J

    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aee:Ljava/lang/String;

    invoke-virtual {p1}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aef:Ljava/lang/String;

    invoke-virtual {p1}, Landroid/os/Parcel;->readInt()I

    move-result v0

    iput v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aeg:I

    invoke-virtual {p1}, Landroid/os/Parcel;->readByte()B

    move-result p1

    if-eqz p1, :cond_1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    iput-boolean v1, p0, Lcom/kwad/framework/filedownloader/d/c;->adN:Z

    return-void
.end method

.method private vo()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aee:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final L(J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aec:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/atomic/AtomicLong;->set(J)V

    return-void
.end method

.method public final M(J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aec:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/atomic/AtomicLong;->addAndGet(J)J

    return-void
.end method

.method public final N(J)V
    .locals 2

    const-wide/32 v0, 0x7fffffff

    cmp-long v0, p1, v0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/d/c;->adN:Z

    iput-wide p1, p0, Lcom/kwad/framework/filedownloader/d/c;->aed:J

    return-void
.end method

.method public final bi(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/d/c;->aef:Ljava/lang/String;

    return-void
.end method

.method public final bj(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/d/c;->aee:Ljava/lang/String;

    return-void
.end method

.method public final bk(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/d/c;->filename:Ljava/lang/String;

    return-void
.end method

.method public final by(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/framework/filedownloader/d/c;->aeg:I

    return-void
.end method

.method public final c(Ljava/lang/String;Z)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/d/c;->Tt:Ljava/lang/String;

    iput-boolean p2, p0, Lcom/kwad/framework/filedownloader/d/c;->aea:Z

    return-void
.end method

.method public final d(B)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aeb:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    return-void
.end method

.method public final describeContents()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final getFilename()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->filename:Ljava/lang/String;

    return-object v0
.end method

.method public final getId()I
    .locals 1

    iget v0, p0, Lcom/kwad/framework/filedownloader/d/c;->id:I

    return v0
.end method

.method public final getPath()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->Tt:Ljava/lang/String;

    return-object v0
.end method

.method public final getTargetFilePath()Ljava/lang/String;
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->getPath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->sT()Z

    move-result v1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->getFilename()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/kwad/framework/filedownloader/f/f;->a(Ljava/lang/String;ZLjava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getTotal()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aed:J

    return-wide v0
.end method

.method public final getUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->url:Ljava/lang/String;

    return-object v0
.end method

.method public final isChunked()Z
    .locals 4

    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aed:J

    const-wide/16 v2, -0x1

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final sT()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aea:Z

    return v0
.end method

.method public final sX()B
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aeb:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    int-to-byte v0, v0

    return v0
.end method

.method public final setId(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/framework/filedownloader/d/c;->id:I

    return-void
.end method

.method public final setUrl(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/d/c;->url:Ljava/lang/String;

    return-void
.end method

.method public final td()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/d/c;->adN:Z

    return v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 3

    const/16 v0, 0x8

    new-array v0, v0, [Ljava/lang/Object;

    iget v1, p0, Lcom/kwad/framework/filedownloader/d/c;->id:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/d/c;->url:Ljava/lang/String;

    const/4 v2, 0x1

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/d/c;->Tt:Ljava/lang/String;

    const/4 v2, 0x2

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/d/c;->aeb:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x3

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/d/c;->aec:Ljava/util/concurrent/atomic/AtomicLong;

    const/4 v2, 0x4

    aput-object v1, v0, v2

    iget-wide v1, p0, Lcom/kwad/framework/filedownloader/d/c;->aed:J

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const/4 v2, 0x5

    aput-object v1, v0, v2

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/d/c;->aef:Ljava/lang/String;

    const/4 v2, 0x6

    aput-object v1, v0, v2

    invoke-super {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x7

    aput-object v1, v0, v2

    const-string v1, "id[%d], url[%s], path[%s], status[%d], sofar[%s], total[%d], etag[%s], %s"

    invoke-static {v1, v0}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final uE()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->getTargetFilePath()Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->getTargetFilePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/framework/filedownloader/f/f;->bo(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final vk()Landroid/content/ContentValues;
    .locals 3

    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->getId()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "_id"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->getUrl()Ljava/lang/String;

    move-result-object v1

    const-string v2, "url"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->getPath()Ljava/lang/String;

    move-result-object v1

    const-string v2, "path"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->sX()B

    move-result v1

    invoke-static {v1}, Ljava/lang/Byte;->valueOf(B)Ljava/lang/Byte;

    move-result-object v1

    const-string v2, "status"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Byte;)V

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->vm()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "sofar"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->getTotal()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, "total"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/d/c;->vo()Ljava/lang/String;

    move-result-object v1

    const-string v2, "errMsg"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->vn()Ljava/lang/String;

    move-result-object v1

    const-string v2, "etag"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->vp()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "connectionCount"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->sT()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    const-string v2, "pathAsDirectory"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Boolean;)V

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->sT()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->getFilename()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/d/c;->getFilename()Ljava/lang/String;

    move-result-object v1

    const-string v2, "filename"

    invoke-virtual {v0, v2, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-object v0
.end method

.method public final vm()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aec:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v0

    return-wide v0
.end method

.method public final vn()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aef:Ljava/lang/String;

    return-object v0
.end method

.method public final vp()I
    .locals 1

    iget v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aeg:I

    return v0
.end method

.method public final vq()V
    .locals 1

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aeg:I

    return-void
.end method

.method public final writeToParcel(Landroid/os/Parcel;I)V
    .locals 2

    iget p2, p0, Lcom/kwad/framework/filedownloader/d/c;->id:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/d/c;->url:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/d/c;->Tt:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    iget-boolean p2, p0, Lcom/kwad/framework/filedownloader/d/c;->aea:Z

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByte(B)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/d/c;->filename:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/d/c;->aeb:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    int-to-byte p2, p2

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByte(B)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/d/c;->aec:Ljava/util/concurrent/atomic/AtomicLong;

    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicLong;->get()J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/d/c;->aed:J

    invoke-virtual {p1, v0, v1}, Landroid/os/Parcel;->writeLong(J)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/d/c;->aee:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/d/c;->aef:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    iget p2, p0, Lcom/kwad/framework/filedownloader/d/c;->aeg:I

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeInt(I)V

    iget-boolean p2, p0, Lcom/kwad/framework/filedownloader/d/c;->adN:Z

    invoke-virtual {p1, p2}, Landroid/os/Parcel;->writeByte(B)V

    return-void
.end method
