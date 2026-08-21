.class public final Lcom/kwad/library/solder/lib/ext/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/library/solder/lib/ext/c$a;
    }
.end annotation


# instance fields
.field private final afX:I

.field private final agl:Ljava/lang/String;

.field private final agm:Ljava/lang/String;

.field private final agn:Ljava/lang/String;

.field private final ago:Ljava/lang/String;

.field private final agp:Ljava/lang/String;

.field private final agq:Ljava/lang/String;

.field private final agr:Ljava/lang/String;

.field private final ags:Z

.field private final agt:Z

.field private final agu:Z

.field private agv:Ljava/lang/String;

.field private agw:[B

.field private agx:Z


# direct methods
.method private constructor <init>(ZZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;[BZZ)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput p10, p0, Lcom/kwad/library/solder/lib/ext/c;->afX:I

    iput-object p4, p0, Lcom/kwad/library/solder/lib/ext/c;->agl:Ljava/lang/String;

    iput-object p5, p0, Lcom/kwad/library/solder/lib/ext/c;->agm:Ljava/lang/String;

    iput-object p6, p0, Lcom/kwad/library/solder/lib/ext/c;->agn:Ljava/lang/String;

    iput-object p7, p0, Lcom/kwad/library/solder/lib/ext/c;->ago:Ljava/lang/String;

    iput-object p8, p0, Lcom/kwad/library/solder/lib/ext/c;->agp:Ljava/lang/String;

    iput-object p9, p0, Lcom/kwad/library/solder/lib/ext/c;->agq:Ljava/lang/String;

    iput-object p3, p0, Lcom/kwad/library/solder/lib/ext/c;->agr:Ljava/lang/String;

    iput-boolean p1, p0, Lcom/kwad/library/solder/lib/ext/c;->ags:Z

    iput-boolean p2, p0, Lcom/kwad/library/solder/lib/ext/c;->agt:Z

    iput-object p11, p0, Lcom/kwad/library/solder/lib/ext/c;->agv:Ljava/lang/String;

    iput-object p12, p0, Lcom/kwad/library/solder/lib/ext/c;->agw:[B

    iput-boolean p13, p0, Lcom/kwad/library/solder/lib/ext/c;->agx:Z

    iput-boolean p14, p0, Lcom/kwad/library/solder/lib/ext/c;->agu:Z

    return-void
.end method

.method synthetic constructor <init>(ZZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;[BZZB)V
    .locals 0

    invoke-direct/range {p0 .. p14}, Lcom/kwad/library/solder/lib/ext/c;-><init>(ZZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;[BZZ)V

    return-void
.end method


# virtual methods
.method public final getRetryCount()I
    .locals 1

    iget v0, p0, Lcom/kwad/library/solder/lib/ext/c;->afX:I

    return v0
.end method

.method public final wF()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/ext/c;->agl:Ljava/lang/String;

    return-object v0
.end method

.method public final wG()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/ext/c;->agm:Ljava/lang/String;

    return-object v0
.end method

.method public final wH()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/ext/c;->agn:Ljava/lang/String;

    return-object v0
.end method

.method public final wI()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/ext/c;->ago:Ljava/lang/String;

    return-object v0
.end method

.method public final wJ()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/ext/c;->agp:Ljava/lang/String;

    return-object v0
.end method

.method public final wK()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/ext/c;->agq:Ljava/lang/String;

    return-object v0
.end method

.method public final wL()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/ext/c;->agt:Z

    return v0
.end method

.method public final wM()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/ext/c;->agu:Z

    return v0
.end method
