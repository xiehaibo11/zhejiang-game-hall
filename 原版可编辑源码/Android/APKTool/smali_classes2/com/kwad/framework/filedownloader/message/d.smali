.class public abstract Lcom/kwad/framework/filedownloader/message/d;
.super Lcom/kwad/framework/filedownloader/message/MessageSnapshot;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/message/d$e;,
        Lcom/kwad/framework/filedownloader/message/d$j;,
        Lcom/kwad/framework/filedownloader/message/d$i;,
        Lcom/kwad/framework/filedownloader/message/d$h;,
        Lcom/kwad/framework/filedownloader/message/d$d;,
        Lcom/kwad/framework/filedownloader/message/d$b;,
        Lcom/kwad/framework/filedownloader/message/d$a;,
        Lcom/kwad/framework/filedownloader/message/d$g;,
        Lcom/kwad/framework/filedownloader/message/d$c;,
        Lcom/kwad/framework/filedownloader/message/d$f;
    }
.end annotation


# direct methods
.method constructor <init>(I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;-><init>(I)V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/framework/filedownloader/message/d;->adN:Z

    return-void
.end method

.method constructor <init>(Landroid/os/Parcel;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/framework/filedownloader/message/MessageSnapshot;-><init>(Landroid/os/Parcel;)V

    return-void
.end method


# virtual methods
.method public final uZ()I
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/message/d;->vd()J

    move-result-wide v0

    const-wide/32 v2, 0x7fffffff

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const v0, 0x7fffffff

    return v0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/message/d;->vd()J

    move-result-wide v0

    long-to-int v0, v0

    return v0
.end method

.method public final va()I
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/message/d;->vb()J

    move-result-wide v0

    const-wide/32 v2, 0x7fffffff

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const v0, 0x7fffffff

    return v0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/message/d;->vb()J

    move-result-wide v0

    long-to-int v0, v0

    return v0
.end method
