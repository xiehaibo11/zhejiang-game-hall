.class public final Lcom/loc/m$g;
.super Ljava/lang/Object;
.source "AuthConfigManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/loc/m;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "g"
.end annotation


# instance fields
.field public a:J

.field public b:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/Long;Ljava/lang/String;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/loc/m$g;->a:J

    const-string v0, ""

    iput-object v0, p0, Lcom/loc/m$g;->b:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/loc/m$g;->a:J

    iput-object p2, p0, Lcom/loc/m$g;->b:Ljava/lang/String;

    return-void
.end method
