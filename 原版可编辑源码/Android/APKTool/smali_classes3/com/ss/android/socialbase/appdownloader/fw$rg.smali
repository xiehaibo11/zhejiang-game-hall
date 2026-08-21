.class public Lcom/ss/android/socialbase/appdownloader/fw$rg;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/appdownloader/fw;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "rg"
.end annotation


# instance fields
.field private c:I

.field private df:Ljava/lang/String;

.field private fw:Z

.field private pp:Ljava/lang/String;

.field private pt:Ljava/lang/String;

.field private q:Landroid/graphics/drawable/Drawable;

.field private rg:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Landroid/graphics/drawable/Drawable;Ljava/lang/String;Ljava/lang/String;IZ)V
    .locals 0

    .line 243
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 244
    invoke-virtual {p0, p2}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->df(Ljava/lang/String;)V

    .line 245
    invoke-virtual {p0, p3}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->rg(Landroid/graphics/drawable/Drawable;)V

    .line 246
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->rg(Ljava/lang/String;)V

    .line 247
    invoke-virtual {p0, p4}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->q(Ljava/lang/String;)V

    .line 248
    invoke-virtual {p0, p5}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->pt(Ljava/lang/String;)V

    .line 249
    invoke-virtual {p0, p6}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->rg(I)V

    .line 250
    invoke-virtual {p0, p7}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->rg(Z)V

    return-void
.end method


# virtual methods
.method public c()I
    .locals 1

    .line 227
    iget v0, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->c:I

    return v0
.end method

.method public df(Ljava/lang/String;)V
    .locals 0

    .line 215
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->df:Ljava/lang/String;

    return-void
.end method

.method public df()Z
    .locals 1

    .line 195
    iget-boolean v0, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->fw:Z

    return v0
.end method

.method public fw()Ljava/lang/String;
    .locals 1

    .line 235
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->pp:Ljava/lang/String;

    return-object v0
.end method

.method public pp()Ljava/lang/String;
    .locals 1

    .line 219
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->pt:Ljava/lang/String;

    return-object v0
.end method

.method public pt()Ljava/lang/String;
    .locals 1

    .line 211
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->df:Ljava/lang/String;

    return-object v0
.end method

.method public pt(Ljava/lang/String;)V
    .locals 0

    .line 239
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->pp:Ljava/lang/String;

    return-void
.end method

.method public q()Ljava/lang/String;
    .locals 1

    .line 203
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->rg:Ljava/lang/String;

    return-object v0
.end method

.method public q(Ljava/lang/String;)V
    .locals 0

    .line 223
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->pt:Ljava/lang/String;

    return-void
.end method

.method public rg()Landroid/graphics/drawable/Drawable;
    .locals 1

    .line 187
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->q:Landroid/graphics/drawable/Drawable;

    return-object v0
.end method

.method public rg(I)V
    .locals 0

    .line 231
    iput p1, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->c:I

    return-void
.end method

.method public rg(Landroid/graphics/drawable/Drawable;)V
    .locals 0

    .line 191
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->q:Landroid/graphics/drawable/Drawable;

    return-void
.end method

.method public rg(Ljava/lang/String;)V
    .locals 0

    .line 207
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->rg:Ljava/lang/String;

    return-void
.end method

.method public rg(Z)V
    .locals 0

    .line 199
    iput-boolean p1, p0, Lcom/ss/android/socialbase/appdownloader/fw$rg;->fw:Z

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 255
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "{\n  pkg name: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 256
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->q()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n  app icon: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 257
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->rg()Landroid/graphics/drawable/Drawable;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "\n  app name: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 258
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->pt()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n  app path: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 259
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->pp()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n  app v name: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 260
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->fw()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n  app v code: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 261
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->c()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "\n  is system: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 262
    invoke-virtual {p0}, Lcom/ss/android/socialbase/appdownloader/fw$rg;->df()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "}"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
