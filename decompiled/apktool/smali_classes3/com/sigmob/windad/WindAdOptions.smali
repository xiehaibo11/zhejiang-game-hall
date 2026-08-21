.class public Lcom/sigmob/windad/WindAdOptions;
.super Ljava/lang/Object;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private d:Lcom/sigmob/windad/WindCustomController;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/sigmob/windad/WindAdOptions;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/sigmob/windad/WindAdOptions;->b:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getAppId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/WindAdOptions;->a:Ljava/lang/String;

    return-object v0
.end method

.method public getAppKey()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/WindAdOptions;->b:Ljava/lang/String;

    return-object v0
.end method

.method public getCustomController()Lcom/sigmob/windad/WindCustomController;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/WindAdOptions;->d:Lcom/sigmob/windad/WindCustomController;

    return-object v0
.end method

.method public getExtData()Ljava/util/HashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/windad/WindAdOptions;->c:Ljava/util/HashMap;

    return-object v0
.end method

.method public setCustomController(Lcom/sigmob/windad/WindCustomController;)Lcom/sigmob/windad/WindAdOptions;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/windad/WindAdOptions;->d:Lcom/sigmob/windad/WindCustomController;

    return-object p0
.end method

.method public setExtData(Ljava/util/HashMap;)Lcom/sigmob/windad/WindAdOptions;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Lcom/sigmob/windad/WindAdOptions;"
        }
    .end annotation

    iput-object p1, p0, Lcom/sigmob/windad/WindAdOptions;->c:Ljava/util/HashMap;

    return-object p0
.end method
