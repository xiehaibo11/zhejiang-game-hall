.class final Lcom/loc/db$1;
.super Ljava/lang/Object;
.source "WifiCollector.java"

# interfaces
.implements Ljava/util/Comparator;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/loc/db;->b(Ljava/util/List;)Ljava/util/List;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/util/Comparator<",
        "Lcom/loc/eg;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic a:Lcom/loc/db;


# direct methods
.method constructor <init>(Lcom/loc/db;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/db$1;->a:Lcom/loc/db;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/loc/eg;Lcom/loc/eg;)I
    .locals 0

    iget p1, p1, Lcom/loc/eg;->c:I

    iget p0, p0, Lcom/loc/eg;->c:I

    sub-int/2addr p1, p0

    return p1
.end method


# virtual methods
.method public final synthetic compare(Ljava/lang/Object;Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/loc/eg;

    check-cast p2, Lcom/loc/eg;

    invoke-static {p1, p2}, Lcom/loc/db$1;->a(Lcom/loc/eg;Lcom/loc/eg;)I

    move-result p1

    return p1
.end method
