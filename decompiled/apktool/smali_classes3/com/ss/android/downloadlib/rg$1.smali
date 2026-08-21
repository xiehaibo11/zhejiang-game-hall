.class Lcom/ss/android/downloadlib/rg$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/df/fw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/rg;->rg(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Ljava/lang/String;

.field final synthetic q:Lcom/ss/android/downloadlib/rg;

.field final synthetic rg:Lcom/ss/android/downloadad/api/rg/df;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/rg;Lcom/ss/android/downloadad/api/rg/df;Ljava/lang/String;)V
    .locals 0

    .line 208
    iput-object p1, p0, Lcom/ss/android/downloadlib/rg$1;->q:Lcom/ss/android/downloadlib/rg;

    iput-object p2, p0, Lcom/ss/android/downloadlib/rg$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    iput-object p3, p0, Lcom/ss/android/downloadlib/rg$1;->df:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Z)V
    .locals 3

    .line 211
    invoke-static {}, Lcom/ss/android/downloadlib/rg;->q()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "appBackForeground->"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x4

    if-eqz p1, :cond_1

    const/4 p1, 0x0

    .line 216
    iget-object v1, p0, Lcom/ss/android/downloadlib/rg$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-static {v1}, Lcom/ss/android/downloadlib/df/c;->q(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 218
    iget-object p1, p0, Lcom/ss/android/downloadlib/rg$1;->df:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/downloadlib/rg$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-static {p1, v1}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result p1

    :cond_0
    if-nez p1, :cond_2

    .line 221
    iget-object p1, p0, Lcom/ss/android/downloadlib/rg$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-static {p1}, Lcom/ss/android/downloadlib/df/c;->pt(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 223
    iget-object p1, p0, Lcom/ss/android/downloadlib/rg$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->ev()I

    move-result p1

    if-ne p1, v0, :cond_2

    .line 224
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/rg/rg;->rg()Lcom/ss/android/downloadlib/addownload/rg/rg;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/rg$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-virtual {p1, v0}, Lcom/ss/android/downloadlib/addownload/rg/rg;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    goto :goto_0

    .line 230
    :cond_1
    iget-object p1, p0, Lcom/ss/android/downloadlib/rg$1;->df:Ljava/lang/String;

    iget-object v1, p0, Lcom/ss/android/downloadlib/rg$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-static {p1, v1}, Lcom/ss/android/downloadlib/df/rg;->rg(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 233
    iget-object p1, p0, Lcom/ss/android/downloadlib/rg$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->ev()I

    move-result p1

    if-ne p1, v0, :cond_2

    .line 234
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/rg/rg;->rg()Lcom/ss/android/downloadlib/addownload/rg/rg;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/rg$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-virtual {p1, v0}, Lcom/ss/android/downloadlib/addownload/rg/rg;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    :cond_2
    :goto_0
    return-void
.end method
