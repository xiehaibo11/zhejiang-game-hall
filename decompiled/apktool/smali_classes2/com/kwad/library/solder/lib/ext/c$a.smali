.class public final Lcom/kwad/library/solder/lib/ext/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/library/solder/lib/ext/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private afX:I

.field private agl:Ljava/lang/String;

.field private agm:Ljava/lang/String;

.field private agn:Ljava/lang/String;

.field private ago:Ljava/lang/String;

.field private agp:Ljava/lang/String;

.field private agq:Ljava/lang/String;

.field private agr:Ljava/lang/String;

.field private ags:Z

.field private agt:Z

.field private agu:Z

.field private agv:Ljava/lang/String;

.field private agw:[B

.field private agx:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x3

    iput v0, p0, Lcom/kwad/library/solder/lib/ext/c$a;->afX:I

    const-string v0, "sodler"

    iput-object v0, p0, Lcom/kwad/library/solder/lib/ext/c$a;->agl:Ljava/lang/String;

    const-string v0, "code-cache"

    iput-object v0, p0, Lcom/kwad/library/solder/lib/ext/c$a;->agm:Ljava/lang/String;

    const-string v0, "lib"

    iput-object v0, p0, Lcom/kwad/library/solder/lib/ext/c$a;->agn:Ljava/lang/String;

    const-string v0, "temp"

    iput-object v0, p0, Lcom/kwad/library/solder/lib/ext/c$a;->ago:Ljava/lang/String;

    const-string v0, "base-1.apk"

    iput-object v0, p0, Lcom/kwad/library/solder/lib/ext/c$a;->agq:Ljava/lang/String;

    const-string v0, ".tmp"

    iput-object v0, p0, Lcom/kwad/library/solder/lib/ext/c$a;->agp:Ljava/lang/String;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/library/solder/lib/ext/c$a;->agt:Z

    iput-boolean v0, p0, Lcom/kwad/library/solder/lib/ext/c$a;->ags:Z

    return-void
.end method


# virtual methods
.method public final bK(I)Lcom/kwad/library/solder/lib/ext/c$a;
    .locals 0

    if-lez p1, :cond_0

    iput p1, p0, Lcom/kwad/library/solder/lib/ext/c$a;->afX:I

    :cond_0
    return-object p0
.end method

.method public final bM(Ljava/lang/String;)Lcom/kwad/library/solder/lib/ext/c$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/solder/lib/ext/c$a;->agl:Ljava/lang/String;

    return-object p0
.end method

.method public final ba(Z)Lcom/kwad/library/solder/lib/ext/c$a;
    .locals 0

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/library/solder/lib/ext/c$a;->agx:Z

    return-object p0
.end method

.method public final bb(Z)Lcom/kwad/library/solder/lib/ext/c$a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/library/solder/lib/ext/c$a;->agu:Z

    return-object p0
.end method

.method public final wN()Lcom/kwad/library/solder/lib/ext/c;
    .locals 18

    move-object/from16 v0, p0

    new-instance v17, Lcom/kwad/library/solder/lib/ext/c;

    iget-boolean v2, v0, Lcom/kwad/library/solder/lib/ext/c$a;->ags:Z

    iget-boolean v3, v0, Lcom/kwad/library/solder/lib/ext/c$a;->agt:Z

    iget-object v4, v0, Lcom/kwad/library/solder/lib/ext/c$a;->agr:Ljava/lang/String;

    iget-object v5, v0, Lcom/kwad/library/solder/lib/ext/c$a;->agl:Ljava/lang/String;

    iget-object v6, v0, Lcom/kwad/library/solder/lib/ext/c$a;->agm:Ljava/lang/String;

    iget-object v7, v0, Lcom/kwad/library/solder/lib/ext/c$a;->agn:Ljava/lang/String;

    iget-object v8, v0, Lcom/kwad/library/solder/lib/ext/c$a;->ago:Ljava/lang/String;

    iget-object v9, v0, Lcom/kwad/library/solder/lib/ext/c$a;->agp:Ljava/lang/String;

    iget-object v10, v0, Lcom/kwad/library/solder/lib/ext/c$a;->agq:Ljava/lang/String;

    iget v11, v0, Lcom/kwad/library/solder/lib/ext/c$a;->afX:I

    iget-object v12, v0, Lcom/kwad/library/solder/lib/ext/c$a;->agv:Ljava/lang/String;

    iget-object v13, v0, Lcom/kwad/library/solder/lib/ext/c$a;->agw:[B

    iget-boolean v14, v0, Lcom/kwad/library/solder/lib/ext/c$a;->agx:Z

    iget-boolean v15, v0, Lcom/kwad/library/solder/lib/ext/c$a;->agu:Z

    const/16 v16, 0x0

    move-object/from16 v1, v17

    invoke-direct/range {v1 .. v16}, Lcom/kwad/library/solder/lib/ext/c;-><init>(ZZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;[BZZB)V

    return-object v17
.end method
